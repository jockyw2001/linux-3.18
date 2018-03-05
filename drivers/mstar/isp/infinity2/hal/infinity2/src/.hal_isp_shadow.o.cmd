cmd_drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/mstar/isp/infinity2/hal/infinity2/src/.hal_isp_shadow.o.d  -nostdinc -isystem /opt/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I./arch/arm/include -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Werror -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -Wframe-larger-than=4096 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -Idrivers/mstar/include -Iarch/arm/include -Iinclude/linux -Idrivers/mstar/cam_os_wrapper/pub -Idrivers/mstar/isp/infinity2/drv/inc -Idrivers/mstar/isp/infinity2/drv/pub -Idrivers/mstar/isp/infinity2/hal/infinity2/inc -Idrivers/mstar/isp/infinity2/hal/infinity2/pub -Idrivers/mstar/isp/infinity2/common -Idrivers/mstar/include/infinity2    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(hal_isp_shadow)"  -D"KBUILD_MODNAME=KBUILD_STR(hal_isp_shadow)" -c -o drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.c

source_drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o := drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.c

deps_drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o := \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/hal_isp.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  arch/arm/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp0.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp1.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp2.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp3.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp4.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp5.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp6.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp7.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp8.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp9.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp10.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp11.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp12.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp_dmag.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/infinity2_reg_isp_miu2sram.h \
  drivers/mstar/isp/infinity2/drv/pub/drv_ms_isp_general.h \
  drivers/mstar/isp/infinity2/common/isp_types.h \
  drivers/mstar/isp/infinity2/common/isp_porting_cfg.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /opt/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/lib/gcc/arm-linux-gnueabihf/4.8.3/include/stdarg.h \
  include/uapi/linux/string.h \
  arch/arm/include/asm/string.h \
  drivers/mstar/isp/infinity2/hal/infinity2/inc/hal_isp_private.h \
  drivers/mstar/isp/infinity2/hal/infinity2/inc/hal_clkpad.h \
  drivers/mstar/isp/infinity2/hal/infinity2/pub/hal_isp_shadow.h \

drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o: $(deps_drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o)

$(deps_drivers/mstar/isp/infinity2/hal/infinity2/src/hal_isp_shadow.o):
