/*
 * =====================================================================================
 *
 *       Filename:  ex7_simple_char_drv.c
 *
 *    Description:  Linux Device Drivers Training 06, Simple Character Driver
 *
 *        Version:  1.0
 *        Created:  01/14/2020 10:32:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <linux/init.h>
#include <linux/module.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int
ex07_simple_char_drv_init(void)
{
        printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);      
        return 0;
}				/* ----------  end of function main  ---------- */

void
ex07_simple_char_drv_exit(void)
{
        printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);      
}	

module_init(ex07_simple_char_drv_init);
module_init(ex07_simple_char_drv_exit);

