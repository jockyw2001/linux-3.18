#include "boot_loader.h"
#include "drv_debug.h"

#include <asm/uaccess.h>
#include <linux/string.h>
#include <linux/slab.h>

#define DETECT_DSP_TEST

// #define ALIGN_XM6(a) (((a) + 0xF) & ~0xF)
#define ALIGN_XM6(a) (((a) + 0xFFF) & ~0xFFF)
// #define SWAP(a, b) do{u8 t; t = a; a = b; b = t;} while(0)
#define SWAP(x,y) do \
   { unsigned char swap_temp[sizeof(x) == sizeof(y) ? (signed)sizeof(x) : -1]; \
     memcpy(swap_temp,&y,sizeof(x)); \
     memcpy(&y,&x,       sizeof(x)); \
     memcpy(&x,swap_temp,sizeof(x)); \
    } while(0)


#if 1
typedef struct {
    u8 boot_copier_binary[0x200 - sizeof(phys_addr_t)*4];
    phys_addr_t dummy;
    phys_addr_t pdma_buff_addr;
    phys_addr_t image_start_addr;
    phys_addr_t entry_point_addr;
} boot_copier_t;

static u8 boot_copier_binary[0x200] =
{
#if 0
    0x88, 0x56, 0xC3, 0x91, 0x70, 0x30, 0xC8, 0x6B, 0x53, 0xBC, 0x7F, 0xFC, 0x8A, 0xD4, 0xC0, 0xCC,
    0x70, 0x01, 0xCE, 0x05, 0xF2, 0x1C, 0x33, 0x41, 0x88, 0x75, 0x36, 0x1C, 0x97, 0xEF, 0000, 0000,
    0x97, 0xEF, 0000, 0000, 0xF8, 0000, 0000, 0x40, 0x64, 0xC0, 0x80, 0x64, 0000, 0x7C, 0xFE, 0000,
    0x06, 0x02, 0x80, 0x61, 0x80, 0xDC, 0x64, 0x01, 0xD8, 0x1C, 0x81, 0x5C, 0x88, 0x05, 0x68, 0x3A,
    0x97, 0xEF, 0000, 0000, 0xF8, 0000, 0000, 0000, 0x95, 0x68, 0x03, 0x60, 0x5F, 0000, 0x30, 0x20,
    0x74, 0000, 0x88, 0x05, 0x78, 0x1E, 0x64, 0x01, 0xD8, 0x1C, 0x81, 0x5C, 0x88, 0x05, 0x68, 0x3A,
    0x97, 0xEF, 0000, 0000, 0xC8, 0x05, 0x05, 0x1E, 0xFE, 0000, 0000, 0000, 0x80, 0x3C, 0x80, 0x5E,
    0000, 0x02, 0x44, 0x8C, 0x88, 0x05, 0x79, 0x1E, 0x88, 0x0C, 0xF8, 0x5E, 0xF8, 0000, 0000, 0000,
    0x95, 0x64, 0x06, 0xB1, 0x97, 0xEF, 0000, 0000, 0xF8, 0xFF, 0xFF, 0xFF, 0x90, 0x81, 0xFE, 0xE1,
    0x97, 0xEF, 0000, 0000, 0x64, 0x01, 0xD8, 0x1C, 0x81, 0x5C, 0xFA, 0xC0, 0x1E, 0x40, 0x88, 0x6C,
    0x71, 0xBA, 0xD7, 0xC9, 0x01, 0xF0, 0x64, 0x01, 0x98, 0x1C, 0x81, 0x5C, 0x97, 0xEF, 0000, 0000,
    0xCE, 0x83, 0x43, 0xBD, 0x71, 0000, 0xC8, 0x6C, 0x70, 0x03, 0x68, 0x02, 0x88, 0x7D, 0xE8, 0x0B,
    0xC8, 0x1F, 0x8F, 0xA3, 0x68, 0x02, 0x88, 0x7D, 0xE4, 0x0D, 0x71, 0000, 0xC8, 0x6C, 0x70, 0x02,
    0xF8, 0000, 0000, 0000, 0xD0, 0x80, 0x01, 0xA2, 0000, 0xA3, 0x97, 0xEF, 0000, 0000, 0x43, 0x82,
    0x51, 0x84, 0x5D, 0x85, 0xC0, 0x3D, 0x20, 0xC0, 0x34, 0x9F, 0x45, 0x1C, 0x98, 0x1B, 0xA0, 0xC5,
    0xF8, 0xFF, 0xFF, 0xFF, 0x90, 0x81, 0xFF, 0xA2, 0x97, 0xEF, 0000, 0000, 0x5D, 0x80, 0x44, 0xC8,
    0x37, 0x32, 0x97, 0xEE, 0000, 0x01, 0x70, 0x10, 0xC8, 0x6C, 0xC1, 0000, 0x70, 0x40, 0x88, 0x05,
    0000, 0000, 0x70, 0x10, 0xC8, 0x6C, 0xC1, 0x81, 0x70, 0x40, 0x88, 0x05, 0x04, 0x01, 0x70, 0x10,
    0x88, 0x6C, 0xC2, 0x02, 0000, 0x03, 0x70, 0x20, 0x88, 0x6B, 0x53, 0xB0, 0000, 0x02, 0000, 0x02,
    0x78, 0000, 0x8E, 0xFE, 0x90, 0x3D, 0x97, 0xEF, 0000, 0000, 0xF8, 0xFF, 0xFF, 0xFF, 0x90, 0x81,
    0xFF, 0x61, 0x97, 0xEF, 0000, 0000, 0xF8, 0xFF, 0xFF, 0xFF, 0x90, 0x81, 0xFD, 0xC0, 0x97, 0xEF,
    0000, 0000, 0xC0, 0x3D, 0x20, 0x61, 0x34, 0x5F, 0x44, 0x9C, 0x98, 0x1B, 0xA0, 0x60, 0xF8, 0xFF,
    0xFF, 0xFF, 0x90, 0x81, 0xFF, 0xA2, 0x97, 0xEF, 0000, 0000, 0000, 0x04, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000
#else
    0xCC, 0xC0, 0xD4, 0x8A, 0xFC, 0x7F, 0xBC, 0x53, 0x6B, 0xC8, 0x30, 0x70, 0x91, 0xC3, 0x56, 0x88,
    0000, 0000, 0xEF, 0x97, 0x1C, 0x36, 0x75, 0x88, 0x41, 0x33, 0x1C, 0xF2, 0x05, 0xCE, 0x01, 0x70,
    0000, 0xFE, 0x7C, 0000, 0x64, 0x80, 0xC0, 0x64, 0x40, 0000, 0000, 0xF8, 0000, 0000, 0xEF, 0x97,
    0x3A, 0x68, 0x05, 0x88, 0x5C, 0x81, 0x1C, 0xD8, 0x01, 0x64, 0xDC, 0x80, 0x61, 0x80, 0x02, 0x06,
    0x20, 0x30, 0000, 0x5F, 0x60, 0x03, 0x68, 0x95, 0000, 0000, 0000, 0xF8, 0000, 0000, 0xEF, 0x97,
    0x3A, 0x68, 0x05, 0x88, 0x5C, 0x81, 0x1C, 0xD8, 0x01, 0x64, 0x1E, 0x78, 0x05, 0x88, 0000, 0x74,
    0x5E, 0x80, 0x3C, 0x80, 0000, 0000, 0000, 0xFE, 0x1E, 0x05, 0x05, 0xC8, 0000, 0000, 0xEF, 0x97,
    0000, 0000, 0000, 0xF8, 0x5E, 0xF8, 0x0C, 0x88, 0x1E, 0x79, 0x05, 0x88, 0x8C, 0x44, 0x02, 0000,
    0xE1, 0xFE, 0x81, 0x90, 0xFF, 0xFF, 0xFF, 0xF8, 0000, 0000, 0xEF, 0x97, 0xB1, 0x06, 0x64, 0x95,
    0x6C, 0x88, 0x40, 0x1E, 0xC0, 0xFA, 0x5C, 0x81, 0x1C, 0xD8, 0x01, 0x64, 0000, 0000, 0xEF, 0x97,
    0000, 0000, 0xEF, 0x97, 0x5C, 0x81, 0x1C, 0x98, 0x01, 0x64, 0xF0, 0x01, 0xC9, 0xD7, 0xBA, 0x71,
    0x0B, 0xE8, 0x7D, 0x88, 0x02, 0x68, 0x03, 0x70, 0x6C, 0xC8, 0000, 0x71, 0xBD, 0x43, 0x83, 0xCE,
    0x02, 0x70, 0x6C, 0xC8, 0000, 0x71, 0x0D, 0xE4, 0x7D, 0x88, 0x02, 0x68, 0xA3, 0x8F, 0x1F, 0xC8,
    0x82, 0x43, 0000, 0000, 0xEF, 0x97, 0xA3, 0000, 0xA2, 0x01, 0x80, 0xD0, 0000, 0000, 0000, 0xF8,
    0xC5, 0xA0, 0x1B, 0x98, 0x1C, 0x45, 0x9F, 0x34, 0xC0, 0x20, 0x3D, 0xC0, 0x85, 0x5D, 0x84, 0x51,
    0xC8, 0x44, 0x80, 0x5D, 0000, 0000, 0xEF, 0x97, 0xA2, 0xFF, 0x81, 0x90, 0xFF, 0xFF, 0xFF, 0xF8,
    0x05, 0x88, 0x40, 0x70, 0000, 0xC1, 0x6C, 0xC8, 0x10, 0x70, 0x01, 0000, 0xEE, 0x97, 0x32, 0x37,
    0x10, 0x70, 0x01, 0x04, 0x05, 0x88, 0x40, 0x70, 0x81, 0xC1, 0x6C, 0xC8, 0x10, 0x70, 0000, 0000,
    0x02, 0000, 0x02, 0000, 0xB0, 0x53, 0x6B, 0x88, 0x20, 0x70, 0x03, 0000, 0x02, 0xC2, 0x6C, 0x88,
    0x81, 0x90, 0xFF, 0xFF, 0xFF, 0xF8, 0000, 0000, 0xEF, 0x97, 0x3D, 0x90, 0xFE, 0x8E, 0000, 0x78,
    0xEF, 0x97, 0xC0, 0xFD, 0x81, 0x90, 0xFF, 0xFF, 0xFF, 0xF8, 0000, 0000, 0xEF, 0x97, 0x61, 0xFF,
    0xFF, 0xF8, 0x60, 0xA0, 0x1B, 0x98, 0x9C, 0x44, 0x5F, 0x34, 0x61, 0x20, 0x3D, 0xC0, 0000, 0000,
    0000, 0000, 0000, 0000, 0x04, 0000, 0000, 0000, 0xEF, 0x97, 0xA2, 0xFF, 0x81, 0x90, 0xFF, 0xFF,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000,
    0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000
#endif
};

#endif

#ifdef DETECT_DSP_TEST
#include <linux/delay.h>
#include <linux/io.h>

#define DSP_PTCM_ADDR       (0xC0200000)
#define DSP_PTCM_SIZE       (64*1024)
#define DSP_DTCM_ADDR       (0xC0000000)
#define DSP_DTCM_SIZE       (512*1024)
#define DSP_CPM_ADDR        (0xC0400000)
#define DSP_CPM_SIZE        (0x4000)

#define DSP_COUNTER_SIZE    32

static long detect_dsp_acting(u8 *buffer_virt)
{
    unsigned int count = 0, i, previous_sum, current_sum;
    u32 *data_counter = (u32*)buffer_virt;

    XM6_MSG(XM6_MSG_DBG, "data_counter is 0x%p\n", data_counter);

    for (count = 0; count < 100; count++) {
        for (current_sum = 0, i = 0; i < DSP_COUNTER_SIZE; i++) {
            current_sum += data_counter[i];
        }

        if (count == 0) {
            previous_sum = current_sum;
            count ++;
        }

        if (current_sum != previous_sum) {
            XM6_MSG(XM6_MSG_WRN, "DSP is acting (%u, %u)\n", previous_sum, current_sum);
            previous_sum = current_sum;
            return 0;
        }

        mdelay(20);
    }

    mdelay(200);

    XM6_MSG(XM6_MSG_ERR, "DSP is not acting (%d)\n", current_sum);

    XM6_MSG(XM6_MSG_DBG, "data_count 0: %08x %08x %08x %08x %08x %08x %08x %08x\n",
                         data_counter[0], data_counter[1], data_counter[2],  data_counter[3],  data_counter[4],  data_counter[5],  data_counter[6],  data_counter[7]);
    XM6_MSG(XM6_MSG_DBG, "data_count 0: %08x %08x %08x %08x %08x %08x %08x %08x\n",
                         data_counter[8], data_counter[9], data_counter[10], data_counter[11], data_counter[12], data_counter[13], data_counter[14], data_counter[15]);

    return -EIO;
}
#endif // DETECT_DSP_TEST

long boot_loader(ceva_hal_handle *handle, phys_addr_t buffer_phys, u8 *buffer_virt, u32 buffer_size, u8 *image_data, u32 image_size)
{
    boot_copier_t *copier_virt;
    u8 *image_virt;
    phys_addr_t copier_phys, image_phys;
    int copier_offset, image_offset;
    u32 remain_size;

    XM6_MSG(XM6_MSG_DBG, "buffer_phys = 0x%x, buffer_virt = 0x%p, buffer_size = 0x%x, image_size = 0x%x\n", buffer_phys, buffer_virt, buffer_size, image_size);

    // address must align to 16 byte
    if (ALIGN_XM6(buffer_phys) != buffer_phys)
    {
        XM6_MSG(XM6_MSG_ERR, "address is not aligned to XM6\n");
        return -EINVAL;
    }

    // reset external memrory for .bss issue
    memset(buffer_virt, 0x00, buffer_size);

    // copier is located in the end of work buffer
    copier_offset = buffer_size - ALIGN_XM6(sizeof(boot_copier_t));
    copier_virt = (boot_copier_t*)(buffer_virt + copier_offset);
    copier_phys = buffer_phys + copier_offset;
    XM6_MSG(XM6_MSG_DBG, "copier_phys = 0x%x, copier_virt = 0x%p\n", copier_phys, copier_virt);

    // image is located in the front of copier
    image_offset = copier_offset - ALIGN_XM6(image_size);
    image_virt = buffer_virt + image_offset;
    image_phys = buffer_phys + image_offset;
    XM6_MSG(XM6_MSG_DBG, "image_phys  = 0x%x, image_virt  = 0x%p\n", image_phys, image_virt);

    // copy copier binary and sett relative data
    memcpy(copier_virt->boot_copier_binary, boot_copier_binary, sizeof(copier_virt->boot_copier_binary));
    copier_virt->pdma_buff_addr = 0;
    copier_virt->image_start_addr = image_phys;
    copier_virt->entry_point_addr = 0;
    XM6_MSG(XM6_MSG_DBG, "boot_copier_binary = 0x%02x       (@ 0x%p)\n", copier_virt->boot_copier_binary[0], &copier_virt->boot_copier_binary);
    XM6_MSG(XM6_MSG_DBG, "pdma_buff_addr     = 0x%08x (@ 0x%p)\n", copier_virt->pdma_buff_addr, &copier_virt->pdma_buff_addr);
    XM6_MSG(XM6_MSG_DBG, "image_start_addr   = 0x%08x (@ 0x%p)\n", copier_virt->image_start_addr, &copier_virt->image_start_addr);
    XM6_MSG(XM6_MSG_DBG, "entry_point_addr   = 0x%08x (@ 0x%p)\n", copier_virt->entry_point_addr, &copier_virt->entry_point_addr);

    XM6_MSG(XM6_MSG_DBG, "endian check %02x %02x %02x %02x = %08x\n", copier_virt->boot_copier_binary[0], copier_virt->boot_copier_binary[1], copier_virt->boot_copier_binary[2], copier_virt->boot_copier_binary[3], *(u32*)(&copier_virt->boot_copier_binary[0]));

    // copy image
    remain_size = copy_from_user(image_virt, image_data, image_size);
    if (remain_size != 0) {
        XM6_MSG(XM6_MSG_ERR, "copy image failed\n");
        return -ENOMEM;
    }

    // start DSP
    ceva_hal_reset_xm6(handle);
    ceva_hal_enable_xm6(handle);
    ceva_hal_bootup_xm6(handle, copier_phys);

#ifdef DETECT_DSP_TEST
    return detect_dsp_acting(buffer_virt);
#endif // DETECT_DSP_TEST

    return 0;
}