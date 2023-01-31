#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("keerthana");

static int __init hello_init(void)
{
    printk(KERN_ALERT "\nHELLO TO ALL\n\n");
    return 0;
}

int my_add(int a,int b)
{
    return (a+b);
}
EXPORT_SYMBOL(my_add);



static void __exit hello_exit(void)
{
    printk(KERN_ALERT "\nBYE TO ALL\n\n");
}
module_init(hello_init);
module_exit(hello_exit);
