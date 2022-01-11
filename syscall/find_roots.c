#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>

SYSCALL_DEFINE0 (find_roots) {
	struct task_struct *task;
	printk("find_roots system call called by process %d\n",current->pid);
	for (task=current; task != &init_task; task=task->parent) {
		printk("id: %d, name: %s\n",task->pid,task->comm);
	}

	return (0);
}
