cmd_fs/nfs/nfs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/nfs/nfs.ko fs/nfs/nfs.o fs/nfs/nfs.mod.o
