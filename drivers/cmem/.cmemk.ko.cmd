cmd_drivers/cmem/cmemk.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/cmem/cmemk.ko drivers/cmem/cmemk.o drivers/cmem/cmemk.mod.o
