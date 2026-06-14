#include <linux/kernel.h>

void print_os_banner(void) {
    printk(KERN_INFO "******************************************\n");
    printk(KERN_INFO "* System Ahmed Osama Initializing...     *\n");
    printk(KERN_INFO "******************************************\n");
}
