obj-m += ex07_simple_char_drv.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWM) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWM) clean 
