cmd_fs/nfs/nfsv2.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/nfs/nfsv2.ko fs/nfs/nfsv2.o fs/nfs/nfsv2.mod.o
