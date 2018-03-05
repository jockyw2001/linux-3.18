cmd_arch/arm/boot/dts/infinity2-fpga.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.infinity2-fpga.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.infinity2-fpga.dtb.dts.tmp arch/arm/boot/dts/infinity2-fpga.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/infinity2-fpga.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.infinity2-fpga.dtb.d.dtc.tmp arch/arm/boot/dts/.infinity2-fpga.dtb.dts.tmp ; cat arch/arm/boot/dts/.infinity2-fpga.dtb.d.pre.tmp arch/arm/boot/dts/.infinity2-fpga.dtb.d.dtc.tmp > arch/arm/boot/dts/.infinity2-fpga.dtb.d

source_arch/arm/boot/dts/infinity2-fpga.dtb := arch/arm/boot/dts/infinity2-fpga.dts

deps_arch/arm/boot/dts/infinity2-fpga.dtb := \
  arch/arm/boot/dts/infinity2-fpga.dtsi \
  arch/arm/boot/dts/../../../../drivers/mstar/include/infinity2/irqs.h \
  arch/arm/boot/dts/../../../../drivers/mstar/include/infinity2/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/infinity2-fpga.dtb: $(deps_arch/arm/boot/dts/infinity2-fpga.dtb)

$(deps_arch/arm/boot/dts/infinity2-fpga.dtb):
