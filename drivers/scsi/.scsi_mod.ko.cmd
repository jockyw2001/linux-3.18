cmd_drivers/scsi/scsi_mod.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/scsi_mod.ko drivers/scsi/scsi_mod.o drivers/scsi/scsi_mod.mod.o
