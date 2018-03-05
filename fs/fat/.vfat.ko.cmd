cmd_fs/fat/vfat.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/fat/vfat.ko fs/fat/vfat.o fs/fat/vfat.mod.o
