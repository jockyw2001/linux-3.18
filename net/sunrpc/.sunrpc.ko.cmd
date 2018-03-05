cmd_net/sunrpc/sunrpc.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sunrpc/sunrpc.ko net/sunrpc/sunrpc.o net/sunrpc/sunrpc.mod.o
