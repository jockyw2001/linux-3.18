cmd_crypto/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o crypto/built-in.o crypto/crypto.o crypto/crypto_wq.o crypto/crypto_algapi.o crypto/aead.o crypto/crypto_blkcipher.o crypto/chainiv.o crypto/eseqiv.o crypto/seqiv.o crypto/crypto_hash.o crypto/pcompress.o crypto/cryptomgr.o crypto/cmac.o crypto/hmac.o crypto/md4.o crypto/md5.o crypto/sha256_generic.o crypto/ecb.o crypto/cbc.o crypto/ctr.o crypto/des_generic.o crypto/aes_generic.o crypto/arc4.o crypto/deflate.o crypto/zlib.o crypto/lzo.o crypto/rng.o crypto/krng.o 
