cmd_drivers/mstar/isp/infinity2/common/kernel.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/mstar/isp/infinity2/common/.kernel.o.d  -nostdinc -isystem /opt/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I./arch/arm/include -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Werror -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -Wframe-larger-than=4096 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -Idrivers/mstar/include -Iarch/arm/include -Iinclude/linux -Idrivers/mstar/cam_os_wrapper/pub -Idrivers/mstar/isp/infinity2/drv/inc -Idrivers/mstar/isp/infinity2/drv/pub -Idrivers/mstar/isp/infinity2/hal/infinity2/inc -Idrivers/mstar/isp/infinity2/hal/infinity2/pub -Idrivers/mstar/isp/infinity2/common -Idrivers/mstar/include/infinity2    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(kernel)"  -D"KBUILD_MODNAME=KBUILD_STR(kernel)" -c -o drivers/mstar/isp/infinity2/common/kernel.o drivers/mstar/isp/infinity2/common/kernel.c

source_drivers/mstar/isp/infinity2/common/kernel.o := drivers/mstar/isp/infinity2/common/kernel.c

deps_drivers/mstar/isp/infinity2/common/kernel.o := \
  drivers/mstar/include/cam_os_wrapper.h \
  drivers/mstar/include/cam_os_util.h \
  drivers/mstar/include/cam_os_util_list.h \
  drivers/mstar/include/cam_os_util_bug.h \
  drivers/mstar/include/cam_os_util_hash.h \
  drivers/mstar/include/cam_os_util_bitmap.h \
  drivers/mstar/include/cam_os_util_ioctl.h \
  drivers/mstar/isp/infinity2/common/kernel_chiptop.h \
  drivers/mstar/isp/infinity2/common/kernel_clkgen.h \
  drivers/mstar/isp/infinity2/common/kernel_padtop.h \

drivers/mstar/isp/infinity2/common/kernel.o: $(deps_drivers/mstar/isp/infinity2/common/kernel.o)

$(deps_drivers/mstar/isp/infinity2/common/kernel.o):
