#include <linux/init.h>
#include <linux/module.h>

int ex07_simple_char_drv_init(void)
{
        printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);      
        return 0;
}				/* ----------  end of function main  ---------- */

void ex07_simple_char_drv_exit(void)
{
        printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);      
}	

module_init(ex07_simple_char_drv_init);
module_exit(ex07_simple_char_drv_exit);

