cmd_fs/fat/fat.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/fat/fat.ko fs/fat/fat.o fs/fat/fat.mod.o
