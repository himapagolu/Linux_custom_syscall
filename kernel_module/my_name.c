#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hima");
MODULE_DESCRIPTION("Custom Kernal Modules");


/*Module parameters init with default values*/
static char *charParameter = "default";
static int intParameter = 0;

module_param(intParameter,int,0);
module_param(charParameter,charp,0);

static int __init my_name_init(void)
{
	printk(KERN_INFO "Hello I'm %s, This is year %d.\n",charParameter,intParameter);
	return 0;

}


static void __exit my_name_exit(void)
{
	printk(KERN_INFO "Goodbye, World!\n");

}

module_init(my_name_init);
module_exit(my_name_exit);
