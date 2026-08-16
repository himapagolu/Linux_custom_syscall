#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long __arm64_sys_my_syscall(void)
{
	printk(KERN_INFO "This is the new sys call Hima implemented.\n");
	return 0;

}
