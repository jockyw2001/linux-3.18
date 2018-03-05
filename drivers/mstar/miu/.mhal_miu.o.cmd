cmd_drivers/mstar/miu/./mhal_miu.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/mstar/miu/./.mhal_miu.o.d  -nostdinc -isystem /opt/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I./arch/arm/include -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Werror -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -Wframe-larger-than=4096 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -Idrivers/mstar/include/ -Idrivers/mstar/include/infinity2 -Idrivers/mstar/miu -Idrivers/mstar/hal/infinity2/miu -Iinclude/linux    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(mhal_miu)"  -D"KBUILD_MODNAME=KBUILD_STR(mdrv_miu)" -c -o drivers/mstar/miu/./mhal_miu.o drivers/mstar/miu/./mhal_miu.c

source_drivers/mstar/miu/./mhal_miu.o := drivers/mstar/miu/./mhal_miu.c

deps_drivers/mstar/miu/./mhal_miu.o := \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/arm.h) \
    $(wildcard include/config/mips.h) \
    $(wildcard include/config/arm64.h) \
    $(wildcard include/config/mp/cma/patch/debug/static/miu/protect.h) \
  include/linux/printk.h \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  /opt/gcc-linaro-arm-linux-gnueabihf-4.8-2014.04_linux/lib/gcc/arm-linux-gnueabihf/4.8.3/include/stdarg.h \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/lto.h) \
    $(wildcard include/config/modules.h) \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/64bit.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
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
  arch/arm/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  include/linux/kern_levels.h \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm/include/asm/linkage.h \
  include/linux/cache.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/uapi/linux/kernel.h \
  include/uapi/linux/sysinfo.h \
  arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  include/linux/dynamic_debug.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  arch/arm/include/asm/string.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  include/uapi/asm-generic/errno-base.h \
  drivers/mstar/include/MsTypes.h \
    $(wildcard include/config/mp/pure/sn/32bit.h) \
  drivers/mstar/include/mdrv_types.h \
  drivers/mstar/include/mdrv_miu.h \
    $(wildcard include/config/mstar/mmaheap.h) \
  drivers/mstar/include/MsTypes.h \
  drivers/mstar/include/regMIU.h \
  drivers/mstar/include/mhal_miu.h \
  drivers/mstar/include/mdrv_system.h \
    $(wildcard include/config/mstar/kenya.h) \
    $(wildcard include/config/mstar/amber1.h) \
    $(wildcard include/config/mstar/keres.h) \
    $(wildcard include/config/mstar/kirin.h) \
    $(wildcard include/config/mstar/kris.h) \
    $(wildcard include/config/mstar/nugget.h) \
    $(wildcard include/config/mstar/kiwi.h) \
    $(wildcard include/config/mstar/kayla.h) \
    $(wildcard include/config/mstar/kratos.h) \
    $(wildcard include/config/mstar/titania2.h) \
    $(wildcard include/config/mstar/euclid.h) \
    $(wildcard include/config/mstar/titania3.h) \
    $(wildcard include/config/mstar/titania10.h) \
    $(wildcard include/config/mstar/uranus4.h) \
    $(wildcard include/config/mstar/titania4.h) \
    $(wildcard include/config/mstar/titania8.h) \
    $(wildcard include/config/mstar/titania12.h) \
    $(wildcard include/config/mstar/amber2.h) \
    $(wildcard include/config/mstar/amber5.h) \
    $(wildcard include/config/mask.h) \
    $(wildcard include/config/mstar/titania9.h) \
    $(wildcard include/config/mstar/titania13.h) \
    $(wildcard include/config/mstar/amber6.h) \
    $(wildcard include/config/mstar/amber7.h) \
    $(wildcard include/config/mstar/amethyst.h) \
    $(wildcard include/config/mstar/emerald.h) \
    $(wildcard include/config/mstar/nikon.h) \
    $(wildcard include/config/mstar/milan.h) \
    $(wildcard include/config/mstar/titania11.h) \
    $(wildcard include/config/mstar/janus2.h) \
    $(wildcard include/config/mstar/kronus.h) \
    $(wildcard include/config/mstar/kaiserin.h) \
    $(wildcard include/config/mstar/kappa.h) \
    $(wildcard include/config/mstar/keltic.h) \
    $(wildcard include/config/mstar/amber3.h) \
    $(wildcard include/config/mstar/eagle.h) \
    $(wildcard include/config/mstar/agate.h) \
    $(wildcard include/config/mstar/edison.h) \
    $(wildcard include/config/mstar/einstein.h) \
    $(wildcard include/config/mstar/napoli.h) \
    $(wildcard include/config/mstar/maldives.h) \
    $(wildcard include/config/mstar/macan.h) \
    $(wildcard include/config/mstar/mustang.h) \
    $(wildcard include/config/mstar/einstein3.h) \
    $(wildcard include/config/mstar/monaco.h) \
    $(wildcard include/config/mstar/muji.h) \
    $(wildcard include/config/mstar/kano.h) \
    $(wildcard include/config/mstar/curry.h) \
    $(wildcard include/config/mstar/c2p.h) \
    $(wildcard include/config/mstar/k6.h) \
    $(wildcard include/config/mstar/k7u/ca53.h) \
    $(wildcard include/config/mstar/k6lite.h) \
    $(wildcard include/config/mstar/k7u/ca7.h) \
    $(wildcard include/config/mstar/monet.h) \
    $(wildcard include/config/mstar/mooney.h) \
    $(wildcard include/config/mstar/manhattan.h) \
    $(wildcard include/config/mstar/maserati.h) \
    $(wildcard include/config/mstar/messi.h) \
    $(wildcard include/config/mstar/kyoto.h) \
    $(wildcard include/config/mstar/eiffel.h) \
    $(wildcard include/config/mstar/nike.h) \
    $(wildcard include/config/mstar/clippers.h) \
    $(wildcard include/config/mstar/madison.h) \
    $(wildcard include/config/mstar/miami.h) \
    $(wildcard include/config/mstar/kaiser.h) \
    $(wildcard include/config/mstar/kaisers.h) \
    $(wildcard include/config/arch/infinity2.h) \
    $(wildcard include/config/mstar/kip.h) \
    $(wildcard include/config/mstar/spi/flash.h) \
  drivers/mstar/include/../include/mdrv_system_st.h \
    $(wildcard include/config/mp/new/utopia/32bit.h) \
  drivers/mstar/include/mst_platform.h \

drivers/mstar/miu/./mhal_miu.o: $(deps_drivers/mstar/miu/./mhal_miu.o)

$(deps_drivers/mstar/miu/./mhal_miu.o):
