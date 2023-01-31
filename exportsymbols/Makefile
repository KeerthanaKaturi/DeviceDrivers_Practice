# makefile for Exportsymbols
obj-y := add/ sym/
KERN_DIR=/lib/modules/$(shell uname -r)/build/
PWD=$(shell pwd)

all:
	make -C $(KERN_DIR) M=$(PWD) modules
clean:
	make -C $(KERN_DIR) M=$(PWD) clean
install:
	make -C $(KERN_DIR) M=$(PWD) modules_install
	depmod -a
remove:
	rm -rf /lib/modules/$(shell uname -r)/extra/*
	depmod -a
