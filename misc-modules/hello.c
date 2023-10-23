/*                                                     
 * $Id: hello.c,v 1.5 2004/10/26 03:32:21 corbet Exp $ 
 */                                                    
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	printk(KERN_ALERT "Nicholas-Buckley77 Hello, linux world!\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Nicholas-Buckley77 Goodbye, cruel world :(\n");
}

module_init(hello_init);
module_exit(hello_exit);
