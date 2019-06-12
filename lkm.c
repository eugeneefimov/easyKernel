#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
//#include <fcntl.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert W. Oliver II");
MODULE_DESCRIPTION("A simple example Linux module.");
MODULE_VERSION("0.01");
static int __init lkm_init(void) {

 int suc = open("/home/eugene/Desktop/database", O_RDWR);
 
 if (suc != -1) printk(KERN_INFO "Hello, World!\n");
 else printk(KERN_INFO "Mistake!!!\n");
 return 0;
}
static void __exit lkm_exit(void) {
 printk(KERN_INFO "Goodbye, World!\n");
}
module_init(lkm_init);
module_exit(lkm_exit);
