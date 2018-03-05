/*
 *#############################################################################
 *
 * Copyright (c) 2006-2011 MStar Semiconductor, Inc.
 * All rights reserved.
 *
 * Unless otherwise stipulated in writing, any and all information contained
 * herein regardless in any format shall remain the sole proprietary of
 * MStar Semiconductor Inc. and be kept in strict confidence
 * (!��MStar Confidential Information!�L) by the recipient.
 * Any unauthorized act including without limitation unauthorized disclosure,
 * copying, use, reproduction, sale, distribution, modification, disassembling,
 * reverse engineering and compiling of the contents of MStar Confidential
 * Information is unlawful and strictly prohibited. MStar hereby reserves the
 * rights to any and all damages, losses, costs and expenses resulting therefrom.
 *
 *#############################################################################
 */
#if 1
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/err.h>
#include <linux/clk.h>
#include <linux/clk-provider.h>
#include <linux/io.h>
#include <linux/hw_random.h>
#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/init.h>
#include <linux/errno.h>
#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/scatterlist.h>
#include <linux/dma-mapping.h>
#include <linux/of_device.h>
#include <linux/delay.h>
#include <linux/crypto.h>
#include <linux/cryptohash.h>
#include <crypto/scatterwalk.h>
#include <crypto/algapi.h>
#include <crypto/aes.h>
#include <crypto/hash.h>
#include <crypto/internal/hash.h>
#include <ms_msys.h>
#include <ms_platform.h>
#include "halAESDMA.h"
#include "mdrv_aes.h"


#else
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/pci.h>
#include <linux/pci_ids.h>
#include <linux/crypto.h>
#include <linux/spinlock.h>
#include <crypto/algapi.h>
#include <crypto/aes.h>
#include <linux/io.h>
#include <linux/delay.h>
#endif

#define AESDMA_DEBUG (0)
#if (AESDMA_DEBUG == 1)
#define AESDMA_DBG(fmt, arg...) printk(KERN_ALERT fmt, ##arg)//KERN_DEBUG KERN_ALERT KERN_WARNING
#else
#define AESDMA_DBG(fmt, arg...)
#endif


#define AESDMA_DES (0)

#define LOOP_CNT    1000

#define MSOS_PROCESS_PRIVATE    0x00000000
#define MSOS_PROCESS_SHARED     0x00000001
#define MS_ASSERT(a)
#define CRYPTO_MUTEX_WAIT_TIME    3000

struct mutex _mtcrypto_lock;

extern int infinity_sha_create(void);
extern int infinity_sha_destroy(void);

static void* alloc_dmem(const char* name, unsigned int size, dma_addr_t *addr)
{
    MSYS_DMEM_INFO dmem;
    memcpy(dmem.name,name,strlen(name)+1);
    dmem.length=size;
    if(0!=msys_request_dmem(&dmem)){
        return NULL;
    }
    *addr=dmem.phys;
    return (void *)((uintptr_t)dmem.kvirt);
}
void free_dmem(const char* name, unsigned int size, void *virt, dma_addr_t addr )
{
	MSYS_DMEM_INFO dmem;
	memcpy(dmem.name,name,strlen(name)+1);
	dmem.length=size;
	dmem.kvirt=(unsigned long long)((uintptr_t)virt);
	dmem.phys=(unsigned long long)((uintptr_t)addr);
	msys_release_dmem(&dmem);
}

void _ms_aes_mem_free(void)
{
    //aesdma_vir_SHABuf_addr
    if(ALLOC_DMEM.aesdma_vir_addr != 0){
       //printk( "%s mem free \n",ALLOC_DMEM.DMEM_AES_ENG_INPUT);
       free_dmem(ALLOC_DMEM.DMEM_AES_ENG_INPUT,AESDMA_ALLOC_MEMSIZE,ALLOC_DMEM.aesdma_vir_addr,ALLOC_DMEM.aesdma_phy_addr);
       ALLOC_DMEM.aesdma_vir_addr = 0;
       ALLOC_DMEM.aesdma_phy_addr = 0;
       }
    if(ALLOC_DMEM.aesdma_vir_SHABuf_addr != 0){
       //printk( "%s mem free \n",ALLOC_DMEM.DMEM_AES_ENG_SHABUF);
       free_dmem(ALLOC_DMEM.DMEM_AES_ENG_SHABUF,AESDMA_ALLOC_MEMSIZE_TEMP,ALLOC_DMEM.aesdma_vir_SHABuf_addr,ALLOC_DMEM.aesdma_phy_SHABuf_addr);
       ALLOC_DMEM.aesdma_vir_SHABuf_addr = 0;
       ALLOC_DMEM.aesdma_phy_SHABuf_addr = 0;
       }
}

void enableClock(void)
{
    int num_parents, i;
    struct clk **aesdma_clks;

    num_parents = of_clk_get_parent_count(psg_mdrv_aesdma->dev.of_node);
    if(num_parents > 0)
    {
        aesdma_clks = kzalloc((sizeof(struct clk *) * num_parents), GFP_KERNEL);

        //enable all clk
        for(i = 0; i < num_parents; i++)
        {
            aesdma_clks[i] = of_clk_get(psg_mdrv_aesdma->dev.of_node, i);
            if (IS_ERR(aesdma_clks[i]))
            {
                printk( "[AESDMA] Fail to get clk!\n" );
                kfree(aesdma_clks);
                return;
            }
            else
            {
                clk_prepare_enable(aesdma_clks[i]);
            }
        }
        kfree(aesdma_clks);
    }
}

void disableClock(void)
{
    int num_parents, i;
    struct clk **aesdma_clks;

    num_parents = of_clk_get_parent_count(psg_mdrv_aesdma->dev.of_node);
    if(num_parents > 0)
    {
        aesdma_clks = kzalloc((sizeof(struct clk *) * num_parents), GFP_KERNEL);

        //disable all clk
        for(i = 0; i < num_parents; i++)
        {
            aesdma_clks[i] = of_clk_get(psg_mdrv_aesdma->dev.of_node, i);
            if (IS_ERR(aesdma_clks[i]))
            {
                printk( "[AESDMA] Fail to get clk!\n" );
                kfree(aesdma_clks);
                return;
            }
            else
            {
                clk_disable_unprepare(aesdma_clks[i]);
            }
        }
        kfree(aesdma_clks);
    }
}

void allocMem(U32 len)
{
    if (!(ALLOC_DMEM.aesdma_vir_addr = alloc_dmem(ALLOC_DMEM.DMEM_AES_ENG_INPUT,
                                             len,//AESDMA_ALLOC_MEMSIZE,
                                             &ALLOC_DMEM.aesdma_phy_addr))){
        printk("[input]unable to allocate aesdma memory\n");
    }
//    if (!(ALLOC_DMEM.aesdma_vir_SHABuf_addr = alloc_dmem(ALLOC_DMEM.DMEM_AES_ENG_SHABUF,
//                                             AESDMA_ALLOC_MEMSIZE,
//                                             &ALLOC_DMEM.aesdma_phy_SHABuf_addr))){
//        printk("[input]unable to allocate aesdma memory\n");
//        return 0;
//    }


    memset(ALLOC_DMEM.aesdma_vir_addr, 0, len);//AESDMA_ALLOC_MEMSIZE);
//	    memset(ALLOC_DMEM.aesdma_vir_SHABuf_addr, 0, AESDMA_ALLOC_MEMSIZE_TEMP);

}

static unsigned int infinity_aes_crypt(struct infinity_aes_op *op, int engine)
{
    int bUseHwKey = true;

    u32 u32loopCnt;

    memset(ALLOC_DMEM.aesdma_vir_addr, 0, op->len);//AESDMA_ALLOC_MEMSIZE
    memcpy(ALLOC_DMEM.aesdma_vir_addr,op->src,op->len);
    AESDMA_DBG("%s %d\n",__FUNCTION__,__LINE__);
    Chip_Flush_MIU_Pipe();
    HAL_AESDMA_Reset();
    HAL_AESDMA_SetFileinAddr(Chip_Phys_to_MIU(ALLOC_DMEM.aesdma_phy_addr));
    HAL_AESDMA_SetXIULength(op->len);
    HAL_AESDMA_SetFileoutAddr(Chip_Phys_to_MIU(ALLOC_DMEM.aesdma_phy_addr),(op->len));
//	    for(i=0;i<AES_KEYSIZE_128;i++)
//	    {
//	        if(op->key[i] != 0)
//	        {
            bUseHwKey = false;
//	            break;
//	        }
//	    }

    if(bUseHwKey)
    {
        HAL_AESDMA_UseHwKey();
    }
    else
    {
        HAL_AESDMA_UseCipherKey();
        HAL_AESDMA_SetCipherKey((U16*)op->key);
    }

    if ((op->mode == AES_MODE_CBC) || (op->mode == AES_MODE_CTR))
    {
        HAL_AESDMA_SetIV((U16*)op->iv);
    }

    HAL_AESDMA_Enable(engine);
    switch(op->mode)
    {
    case AES_MODE_ECB:
        HAL_AESDMA_SetChainModeECB();
        break;

    case AES_MODE_CBC:
        HAL_AESDMA_SetChainModeCBC();
        break;

    case AES_MODE_CTR:
        HAL_AESDMA_SetChainModeCTR();
        break;

    default:
        return -1;
    }

    if(op->dir == AES_DIR_DECRYPT)
    {
        HAL_AESDMA_CipherDecrypt();
    }

    HAL_AESDMA_FileOutEnable(1);
    HAL_AESDMA_Start(1);
    u32loopCnt = 0;

    // Wait for ready.
    //while(((HAL_AESDMA_GetStatus() & AESDMA_CTRL_DMA_DONE) != AESDMA_CTRL_DMA_DONE));
    while(((HAL_AESDMA_GetStatus() & AESDMA_CTRL_DMA_DONE) != AESDMA_CTRL_DMA_DONE)&&
              (u32loopCnt<LOOP_CNT))
    {

            u32loopCnt++;
//				mdelay(1);
	}
    if (u32loopCnt==LOOP_CNT){
       // asm("b .");
        printk("Time out loop%d\n",u32loopCnt);
        memset(ALLOC_DMEM.aesdma_vir_addr, 0, op->len);
        memcpy(op->dst, ALLOC_DMEM.aesdma_vir_addr, op->len);
        return -1;
    }
    else
    {
        memcpy(op->dst, ALLOC_DMEM.aesdma_vir_addr, op->len);
    }

    Chip_Flush_MIU_Pipe();
    HAL_AESDMA_Reset();
    return  op->len ;
}

/* CRYPTO-API Functions */

static int infinity_setkey_cip(struct crypto_tfm *tfm, const u8 *key, unsigned int len)
{
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);
    unsigned int ret;

    AESDMA_DBG("%s %d\n",__FUNCTION__,__LINE__);

    op->keylen = len;
    if (len == AES_KEYSIZE_128) {
        memcpy(op->key, key, len);
        return 0;
    }

    if (len != AES_KEYSIZE_192 && len != AES_KEYSIZE_256) {
        /* not supported at all */
        tfm->crt_flags |= CRYPTO_TFM_RES_BAD_KEY_LEN;
        return -EINVAL;
    }

    /*
     * The requested key size is not supported by HW, do a fallback
     */
    op->fallback.cip->base.crt_flags &= ~CRYPTO_TFM_REQ_MASK;
    op->fallback.cip->base.crt_flags |= (tfm->crt_flags & CRYPTO_TFM_REQ_MASK);

    ret = crypto_cipher_setkey(op->fallback.cip, key, len);
    if (ret) {
        tfm->crt_flags &= ~CRYPTO_TFM_RES_MASK;
        tfm->crt_flags |= (op->fallback.cip->base.crt_flags & CRYPTO_TFM_RES_MASK);
    }
    return ret;
}

static int infinity_setkey_blk(struct crypto_tfm *tfm, const u8 *key, unsigned int len)
{
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);
    unsigned int ret;

    AESDMA_DBG("%s %d\n",__FUNCTION__,__LINE__);

    op->keylen = len;

    if (len == AES_KEYSIZE_128) {
        memcpy(op->key, key, len);
        return 0;
    }

    if (len != AES_KEYSIZE_192 && len != AES_KEYSIZE_256) {
        /* not supported at all */
        tfm->crt_flags |= CRYPTO_TFM_RES_BAD_KEY_LEN;
        return -EINVAL;
    }

    /*
     * The requested key size is not supported by HW, do a fallback
     */
    op->fallback.blk->base.crt_flags &= ~CRYPTO_TFM_REQ_MASK;
    op->fallback.blk->base.crt_flags |= (tfm->crt_flags & CRYPTO_TFM_REQ_MASK);

    ret = crypto_blkcipher_setkey(op->fallback.blk, key, len);
    if (ret) {
        tfm->crt_flags &= ~CRYPTO_TFM_RES_MASK;
        tfm->crt_flags |= (op->fallback.blk->base.crt_flags & CRYPTO_TFM_RES_MASK);
    }
    return ret;
}

static int fallback_blk_dec(struct blkcipher_desc *desc,
                            struct scatterlist *dst, struct scatterlist *src,
                            unsigned int nbytes)
{
    unsigned int ret;
    struct crypto_blkcipher *tfm;
    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);

    tfm = desc->tfm;
    desc->tfm = op->fallback.blk;

    ret = crypto_blkcipher_decrypt_iv(desc, dst, src, nbytes);

    desc->tfm = tfm;
    return ret;
}
static int fallback_blk_enc(struct blkcipher_desc *desc,
                            struct scatterlist *dst, struct scatterlist *src,
                            unsigned int nbytes)
{
    unsigned int ret;
    struct crypto_blkcipher *tfm;
    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);

    tfm = desc->tfm;
    desc->tfm = op->fallback.blk;

    ret = crypto_blkcipher_encrypt_iv(desc, dst, src, nbytes);

    desc->tfm = tfm;
    return ret;
}

static void infinity_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
{
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);
    AESDMA_DBG("%s %d\n",__FUNCTION__,__LINE__);
    enableClock();
    allocMem(16);
    if (unlikely(op->keylen != AES_KEYSIZE_128)) {
        crypto_cipher_encrypt_one(op->fallback.cip, out, in);
        return;
    }

    op->src = (void *) in;
    op->dst = (void *) out;
    op->mode = AES_MODE_ECB;
    op->flags = 0;
    op->len = AES_BLOCK_SIZE;
    op->dir = AES_DIR_ENCRYPT;
    infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
}


static void infinity_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
{
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);
    AESDMA_DBG("%s %d\n",__FUNCTION__,__LINE__);
    if (unlikely(op->keylen != AES_KEYSIZE_128)) {
        crypto_cipher_decrypt_one(op->fallback.cip, out, in);
        return;
    }
    op->src = (void *) in;
    op->dst = (void *) out;
    op->mode = AES_MODE_ECB;
    op->flags = 0;
    op->len = AES_BLOCK_SIZE;
    op->dir = AES_DIR_DECRYPT;
    infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
}

static int fallback_init_cip(struct crypto_tfm *tfm)
{
    const char *name = crypto_tfm_alg_name(tfm);
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);
    op->fallback.cip = crypto_alloc_cipher(name, 0,
                CRYPTO_ALG_ASYNC | CRYPTO_ALG_NEED_FALLBACK);

    if (IS_ERR(op->fallback.cip)) {
        return PTR_ERR(op->fallback.cip);
    }
    return 0;
}
static void fallback_exit_cip(struct crypto_tfm *tfm)
{
   struct infinity_aes_op *op = crypto_tfm_ctx(tfm);

    crypto_free_cipher(op->fallback.cip);
    op->fallback.cip = NULL;
}

static int fallback_init_blk(struct crypto_tfm *tfm)
{
    const char *name = crypto_tfm_alg_name(tfm);
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);
    op->fallback.blk = crypto_alloc_blkcipher(name, 0,
            CRYPTO_ALG_ASYNC | CRYPTO_ALG_NEED_FALLBACK);

    if (IS_ERR(op->fallback.blk)) {
        return PTR_ERR(op->fallback.blk);
    }
    return 0;
}

static void fallback_exit_blk(struct crypto_tfm *tfm)
{
    struct infinity_aes_op *op = crypto_tfm_ctx(tfm);

    crypto_free_blkcipher(op->fallback.blk);
    op->fallback.blk = NULL;
}

static int infinity_cbc_decrypt(struct blkcipher_desc *desc,
                                struct scatterlist *dst, struct scatterlist *src,
                                unsigned int nbytes)
{
    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);
    struct blkcipher_walk walk;
    int err, ret;
    U8 ivTemp[16]={0};

    mutex_lock(&_mtcrypto_lock);
    enableClock();
    allocMem(4096);
    AESDMA_DBG("%s %d\n",__FUNCTION__,__LINE__);
    if (unlikely(op->keylen != AES_KEYSIZE_128))
        return fallback_blk_dec(desc, dst, src, nbytes);
    blkcipher_walk_init(&walk, dst, src, nbytes);
    err = blkcipher_walk_virt(desc, &walk);

    while ((nbytes = walk.nbytes)) {
        op->iv = walk.iv;
//	        AESDMA_DBG(" 1%s %d\n",__FUNCTION__,nbytes);
        op->src = walk.src.virt.addr,
        op->dst = walk.dst.virt.addr;
        op->mode = AES_MODE_CBC;
        op->len = nbytes - (nbytes % AES_BLOCK_SIZE);
        memcpy(ivTemp, op->src+(op->len)-16, 16);
        op->dir = AES_DIR_DECRYPT;
        ret = infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
        nbytes -= ret;
        err = blkcipher_walk_done(desc, &walk, nbytes);
        memcpy(walk.iv, ivTemp, 16);
    }
    disableClock();
    _ms_aes_mem_free();
    mutex_unlock(&_mtcrypto_lock);
    return err;
}

static int infinity_cbc_encrypt(struct blkcipher_desc *desc,
                                struct scatterlist *dst, struct scatterlist *src,
                                unsigned int nbytes)
{
    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);
    struct blkcipher_walk walk;
    int err, ret;

    mutex_lock(&_mtcrypto_lock);
    enableClock();
    allocMem(4096);
    AESDMA_DBG("%s name %s\n",__FUNCTION__,desc->tfm->base.__crt_alg->cra_name);
//	    AESDMA_DBG("%s engine %x\n",__FUNCTION__,op->engine);
    if (unlikely(op->keylen != AES_KEYSIZE_128))
        return fallback_blk_dec(desc, dst, src, nbytes);
    blkcipher_walk_init(&walk, dst, src, nbytes);
    err = blkcipher_walk_virt(desc, &walk);

    while ((nbytes = walk.nbytes)) {
        op->iv = walk.iv;
//	        AESDMA_DBG(" 1%s %d\n",__FUNCTION__,nbytes);
        op->src = walk.src.virt.addr,
        op->dst = walk.dst.virt.addr;
        op->mode = AES_MODE_CBC;
        op->len = nbytes - (nbytes % AES_BLOCK_SIZE);
        op->dir = AES_DIR_ENCRYPT;
        ret = infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
        nbytes -= ret;
        err = blkcipher_walk_done(desc, &walk, nbytes);
        if (walk.nbytes > 0)
            memcpy(walk.iv,(op->dst+(op->len)-16),16);
    }
    disableClock();
    _ms_aes_mem_free();
    mutex_unlock(&_mtcrypto_lock);
    return err;
}

static int infinity_ecb_decrypt(struct blkcipher_desc *desc,
                                struct scatterlist *dst, struct scatterlist *src,
                                unsigned int nbytes)
{
    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);
    struct blkcipher_walk walk;
    int err, ret;

    mutex_lock(&_mtcrypto_lock);
    enableClock();
    allocMem(4096);
    AESDMA_DBG("%s name %s\n",__FUNCTION__,desc->tfm->base.__crt_alg->cra_name);
//	    AESDMA_DBG("%s engine %x\n",__FUNCTION__,op->engine);
    if (unlikely(op->keylen != AES_KEYSIZE_128))
        return fallback_blk_dec(desc, dst, src, nbytes);
    blkcipher_walk_init(&walk, dst, src, nbytes);
    err = blkcipher_walk_virt(desc, &walk);

    while ((nbytes = walk.nbytes)) {
        op->src = walk.src.virt.addr,
        op->dst = walk.dst.virt.addr;
        op->mode = AES_MODE_ECB;
        op->len = nbytes - (nbytes % AES_BLOCK_SIZE);
        op->dir = AES_DIR_DECRYPT;
        ret = infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
        nbytes -= ret;
        err = blkcipher_walk_done(desc, &walk, nbytes);
    }
    disableClock();
    _ms_aes_mem_free();
    mutex_unlock(&_mtcrypto_lock);
    return err;
}

static int infinity_ecb_encrypt(struct blkcipher_desc *desc,
                                struct scatterlist *dst, struct scatterlist *src,
                                unsigned int nbytes)
{

    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);
    struct blkcipher_walk walk;
    int err, ret;

//	    printk("tfm->__crt_alg->cra_name; %s\n", desc->tfm->base.__crt_alg->cra_name);
    mutex_lock(&_mtcrypto_lock);
//	    printk("op->engine %s\n", op->engine);
    enableClock();
    allocMem(4096);
//	    op->engine = desc->tfm->base.__crt_alg->cra_name;
//	    if (strcmp(desc->tfm->base.__crt_alg->cra_name, "ecb(tdes)") == 0)
//	        op->engine = AESDMA_CTRL_TDES_EN;
//	    else if (strcmp(desc->tfm->base.__crt_alg->cra_name, "ecb(des)") == 0)
//	        op->engine = AESDMA_CTRL_DES_EN;
//	    else
//	        op->engine = AESDMA_CTRL_AES_EN;

    AESDMA_DBG("%s name %s\n",__FUNCTION__,desc->tfm->base.__crt_alg->cra_name);
//	    AESDMA_DBG("%s engine %x\n",__FUNCTION__,op->engine);

    if (unlikely(op->keylen != AES_KEYSIZE_128))
        return fallback_blk_enc(desc, dst, src, nbytes);

    blkcipher_walk_init(&walk, dst, src, nbytes);
    err = blkcipher_walk_virt(desc, &walk);
    while ((nbytes = walk.nbytes)) {
        op->src = walk.src.virt.addr,
        op->dst = walk.dst.virt.addr;
        op->mode = AES_MODE_ECB;
        op->len = nbytes - (nbytes % AES_BLOCK_SIZE);
        op->dir = AES_DIR_ENCRYPT;
        ret = infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
        nbytes -= ret;
        ret =  blkcipher_walk_done(desc, &walk, nbytes);
    }
    disableClock();
    _ms_aes_mem_free();
    mutex_unlock(&_mtcrypto_lock);
    return err;
}

/*ctr decrypt=encrypt*/
static int infinity_ctr_encrypt(struct blkcipher_desc *desc,
                                struct scatterlist *dst, struct scatterlist *src,
                                unsigned int nbytes)
{
    struct infinity_aes_op *op = crypto_blkcipher_ctx(desc->tfm);
    struct blkcipher_walk walk;
    int err, ret, counter, n;
    U32 *tempIV;

    mutex_lock(&_mtcrypto_lock);
    enableClock();
    allocMem(4096);
    AESDMA_DBG("%s name %s\n",__FUNCTION__,desc->tfm->base.__crt_alg->cra_name);


    if (unlikely(op->keylen != AES_KEYSIZE_128))
        return fallback_blk_dec(desc, dst, src, nbytes);
    blkcipher_walk_init(&walk, dst, src, nbytes);
    err = blkcipher_walk_virt(desc, &walk);

    while ((nbytes = walk.nbytes)) {
//	        AESDMA_DBG(" 1%s %d\n",__FUNCTION__,nbytes);
        op->iv = walk.iv;
        op->src = walk.src.virt.addr,
        op->dst = walk.dst.virt.addr;
        op->mode = AES_MODE_CTR;
        op->len = nbytes - (nbytes % AES_BLOCK_SIZE);
        op->dir = AES_DIR_ENCRYPT;
        ret = infinity_aes_crypt(op, AESDMA_CTRL_AES_EN);
        nbytes -= ret;
        err = blkcipher_walk_done(desc, &walk, nbytes);
        if (walk.nbytes > 0)
        {
            tempIV=(U32* )op->iv;
            counter = op->len >> 4;

            for (n = 0; n <= 3; n++)
            {
                (tempIV[n]) = be32_to_cpu(tempIV[n]);
            }
            // iv=iv+1;
            while(counter)
            {
                tempIV[3] = tempIV[3] + 1;
                if (tempIV[3]==0x0)
                {
                    tempIV[2] = tempIV[2] + 1;
                    if (tempIV[2]==0x0)
                    {
                        tempIV[1] = tempIV[1] + 1;
                        if (tempIV[1]==0x0)
                        {
                            tempIV[0] = tempIV[0] + 1;
                            if (tempIV[1]==0x0)
                            AESDMA_DBG("IV counter overflow! %s %d\n",__FUNCTION__,__LINE__);
                        }
                    }
                }
                counter--;
            }

            for (n=0; n <= 3; n++)
            {
                (tempIV[n]) = cpu_to_be32(tempIV[n]);
            }
        }
    }
    disableClock();
    _ms_aes_mem_free();
    mutex_unlock(&_mtcrypto_lock);
    return err;
}

#if 0
static struct crypto_alg infinity_tdes_alg = {
    .cra_name           =   "tdes",
    .cra_driver_name    =   "tdes-generic",
    .cra_priority       =   400,
    .cra_alignmask      =   15,
    .cra_flags          =   CRYPTO_ALG_TYPE_CIPHER |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_cip,
    .cra_exit           =   fallback_exit_cip,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .cipher    =    {
            .cia_min_keysize    =    AES_MIN_KEY_SIZE,
            .cia_max_keysize    =    AES_MAX_KEY_SIZE,
            .cia_setkey         =    infinity_setkey_cip,
            .cia_encrypt        =    infinity_encrypt,
            .cia_decrypt        =    infinity_decrypt
        }
    }
};

static struct crypto_alg infinity_des_alg = {
    .cra_name           =   "des",
    .cra_driver_name    =   "infinity-des",
    .cra_priority       =   50,
    .cra_alignmask      =   15,
    .cra_flags          =   CRYPTO_ALG_TYPE_CIPHER |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_cip,
    .cra_exit           =   fallback_exit_cip,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .cipher    =    {
            .cia_min_keysize    =    AES_MIN_KEY_SIZE,
            .cia_max_keysize    =    AES_MAX_KEY_SIZE,
            .cia_setkey         =    infinity_setkey_cip,
            .cia_encrypt        =    infinity_encrypt,
            .cia_decrypt        =    infinity_decrypt
        }
    }
};
#endif

static struct crypto_alg infinity_alg = {
    .cra_name           =   "aes",
    .cra_driver_name    =   "infinity-aes",
    .cra_priority       =   300,
    .cra_alignmask      =   15,
    .cra_flags          =   CRYPTO_ALG_TYPE_CIPHER |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_cip,
    .cra_exit           =   fallback_exit_cip,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .cipher    =    {
            .cia_min_keysize    =    AES_MIN_KEY_SIZE,
            .cia_max_keysize    =    AES_MAX_KEY_SIZE,
            .cia_setkey         =    infinity_setkey_cip,
            .cia_encrypt        =    infinity_encrypt,
            .cia_decrypt        =    infinity_decrypt
        }
    }
};

static struct crypto_alg infinity_cbc_alg = {
    .cra_name           =   "cbc(aes)",
    .cra_driver_name    =   "cbc-aes-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =   {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_cbc_encrypt,
            .decrypt        =   infinity_cbc_decrypt,
            .ivsize         =   AES_BLOCK_SIZE,
        }
    }
};

static struct crypto_alg infinity_ecb_alg = {
    .cra_name           =   "ecb(aes)",
    .cra_driver_name    =   "ecb-aes-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =    {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_ecb_encrypt,
            .decrypt        =   infinity_ecb_decrypt,
        }
    }
};

static struct crypto_alg infinity_ctr_alg = {
    .cra_name           =   "ctr(aes)",
    .cra_driver_name    =   "ctr-aes-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =    {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .ivsize		    =   AES_BLOCK_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_ctr_encrypt,
            .decrypt        =   infinity_ctr_encrypt,
        }
    }
};

#if 0
static struct crypto_alg infinity_des_cbc_alg = {
    .cra_name           =   "cbc(des)12",
    .cra_driver_name    =   "cbc-des-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =   {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_cbc_encrypt,
            .decrypt        =   infinity_cbc_decrypt,
            .ivsize         =   AES_BLOCK_SIZE,
        }
    }
};

static struct crypto_alg infinity_des_ecb_alg = {
    .cra_name           =   "ecb(des)12",
    .cra_driver_name    =   "ecb-des-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =    {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_ecb_encrypt,
            .decrypt        =   infinity_ecb_decrypt,
        }
    }
};

static struct crypto_alg infinity_des_ctr_alg = {
    .cra_name           =   "ctr(des)12",
    .cra_driver_name    =   "ctr-des-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =    {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .ivsize		    =   AES_BLOCK_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_ctr_encrypt,
            .decrypt        =   infinity_ctr_encrypt,
        }
    }
};

static struct crypto_alg infinity_tdes_cbc_alg = {
    .cra_name           =   "cbc(tdes)",
    .cra_driver_name    =   "cbc(tdes-generic)",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =   {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_cbc_encrypt,
            .decrypt        =   infinity_cbc_decrypt,
            .ivsize         =   AES_BLOCK_SIZE,
        }
    }
};

static struct crypto_alg infinity_tdes_ecb_alg = {
    .cra_name           =   "ecb(tdes)",
    .cra_driver_name    =   "ecb-tdes-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =    {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_ecb_encrypt,
            .decrypt        =   infinity_ecb_decrypt,
        }
    }
};

static struct crypto_alg infinity_tdes_ctr_alg = {
    .cra_name           =   "ctr(tdes)",
    .cra_driver_name    =   "ctr-tdes-infinity",
    .cra_priority       =   400,
    .cra_flags          =   CRYPTO_ALG_TYPE_BLKCIPHER |
                            CRYPTO_ALG_KERN_DRIVER_ONLY |
                            CRYPTO_ALG_NEED_FALLBACK,
    .cra_init           =   fallback_init_blk,
    .cra_exit           =   fallback_exit_blk,
    .cra_blocksize      =   AES_BLOCK_SIZE,
    .cra_ctxsize        =   sizeof(struct infinity_aes_op),
    .cra_alignmask      =   15,
    .cra_type           =   &crypto_blkcipher_type,
    .cra_module         =   THIS_MODULE,
    .cra_u              =   {
        .blkcipher  =    {
            .min_keysize    =   AES_MIN_KEY_SIZE,
            .max_keysize    =   AES_MAX_KEY_SIZE,
            .ivsize		    =   AES_BLOCK_SIZE,
            .setkey         =   infinity_setkey_blk,
            .encrypt        =   infinity_ctr_encrypt,
            .decrypt        =   infinity_ctr_encrypt,
        }
    }
};
#endif

static int infinity_aes_resume(struct platform_device *pdev)
{
    return 0;
}

static int infinity_aes_suspend(struct platform_device *pdev, pm_message_t state)
{
    return 0;
}

static int infinity_aes_remove(struct platform_device *pdev)
{
    crypto_unregister_alg(&infinity_alg);
    crypto_unregister_alg(&infinity_ecb_alg);
    crypto_unregister_alg(&infinity_cbc_alg);
    infinity_sha_destroy();
    _ms_aes_mem_free();
    return 0;
}

static int infinity_aes_probe(struct platform_device *pdev)
{

    int ret=-1;

    mutex_init(&_mtcrypto_lock);
#if 0
    ret = crypto_register_alg(&infinity_des_alg);
    if (ret)
        goto eiomap;
    ret = crypto_register_alg(&infinity_tdes_alg);
    if (ret)
        goto eiomap;
#endif
    ret = crypto_register_alg(&infinity_alg);
    if (ret)
        goto eiomap;

    ret = crypto_register_alg(&infinity_ecb_alg);
    if (ret)
        goto eecb;

    ret = crypto_register_alg(&infinity_cbc_alg);
    if (ret)
        goto ecbc;

    ret = crypto_register_alg(&infinity_ctr_alg);
    if (ret)
        goto ectr;
#if 0
    ret = crypto_register_alg(&infinity_des_ecb_alg);
    if (ret)
        goto edesecb;

    ret = crypto_register_alg(&infinity_des_cbc_alg);
    if (ret)
        goto edescbc;

    ret = crypto_register_alg(&infinity_des_ctr_alg);
    if (ret)
        goto edesctr;

    ret = crypto_register_alg(&infinity_tdes_ecb_alg);
    if (ret)
        goto etdesecb;

	    ret = crypto_register_alg(&infinity_tdes_cbc_alg);
	    if (ret)
	        goto etdescbc;

    ret = crypto_register_alg(&infinity_tdes_ctr_alg);
    if (ret)
        goto etdesctr;
#endif

    infinity_sha_create();
    dev_notice(&pdev->dev, "MSTAR AES engine enabled.\n");
    psg_mdrv_aesdma = pdev;
    return 0;
 eecb:
    crypto_unregister_alg(&infinity_ecb_alg);
 ecbc:
    crypto_unregister_alg(&infinity_cbc_alg);
 ectr:
    crypto_unregister_alg(&infinity_ctr_alg);
#if 0
 edesecb:
    crypto_unregister_alg(&infinity_des_ecb_alg);
 edescbc:
    crypto_unregister_alg(&infinity_des_cbc_alg);
 edesctr:
    crypto_unregister_alg(&infinity_des_ctr_alg);
 etdesecb:
    printk("!!!infinity_tdes_ecb_alg initialization failed.\n");
    crypto_unregister_alg(&infinity_tdes_ecb_alg);
 etdescbc:
    printk("!!!infinity_tdes_cbc_alg initialization failed.\n");
    crypto_unregister_alg(&infinity_tdes_cbc_alg);
 etdesctr:
    printk("!!!infinity_tdes_ctr_alg initialization failed.\n");
    crypto_unregister_alg(&infinity_tdes_ctr_alg);
#endif
 eiomap:
    crypto_unregister_alg(&infinity_alg);
    dev_err(&pdev->dev, "MSTAR AES initialization failed.\n");
    return ret;
}

static const struct of_device_id infinity_aes_dt_ids[] =
{
	{ .compatible = "mstar,infinity-aes" },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, infinity_aes_dt_ids);

static struct platform_driver infinity_aes_driver = {
	.probe		= infinity_aes_probe,
	.remove		= infinity_aes_remove,
	.suspend    = infinity_aes_suspend,
    .resume     = infinity_aes_resume,
	.driver		= {
		.name	= "infinity_aes",
		.owner	= THIS_MODULE,
		.of_match_table = of_match_ptr(infinity_aes_dt_ids),
	},
};


module_platform_driver(infinity_aes_driver);


MODULE_DESCRIPTION("iNfinity AES hw acceleration support.");

//	//	MODULE_ALIAS_CRYPTO("ctr(des)");
//	MODULE_ALIAS_CRYPTO("tdes");
//	MODULE_ALIAS_CRYPTO("tdes-generic");

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MS Comp.");
