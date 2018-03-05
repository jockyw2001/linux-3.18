cmd_drivers/scsi/sd_mod.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/sd_mod.ko drivers/scsi/sd_mod.o drivers/scsi/sd_mod.mod.o
