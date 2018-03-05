cmd_arch/arm/boot/dts/infinity2-fpga-CA7.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.dts.tmp arch/arm/boot/dts/infinity2-fpga-CA7.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/infinity2-fpga-CA7.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.d.dtc.tmp arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.dts.tmp ; cat arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.d.pre.tmp arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.d.dtc.tmp > arch/arm/boot/dts/.infinity2-fpga-CA7.dtb.d

source_arch/arm/boot/dts/infinity2-fpga-CA7.dtb := arch/arm/boot/dts/infinity2-fpga-CA7.dts

deps_arch/arm/boot/dts/infinity2-fpga-CA7.dtb := \
  arch/arm/boot/dts/infinity2-fpga-CA7.dtsi \
  arch/arm/boot/dts/../../../../drivers/mstar/include/infinity2/irqs.h \
  arch/arm/boot/dts/../../../../drivers/mstar/include/infinity2/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/infinity2-fpga-CA7.dtb: $(deps_arch/arm/boot/dts/infinity2-fpga-CA7.dtb)

$(deps_arch/arm/boot/dts/infinity2-fpga-CA7.dtb):
