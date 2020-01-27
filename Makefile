obj-m += ex7_simple_char_drv.o

all:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
		 
clean:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
