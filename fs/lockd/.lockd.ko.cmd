cmd_fs/lockd/lockd.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/lockd/lockd.ko fs/lockd/lockd.o fs/lockd/lockd.mod.o
