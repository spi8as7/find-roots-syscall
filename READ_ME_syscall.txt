 1. Create the source in /usr/src/linux-3.0.21-dev/ folder
 
 2. Update makefile
 
/usr/src/linux-3.2.39-dev/include/linux/syscalls.h 
 3. /usr/src/linux-3.0.21-dev/arch/x86/kernel/syscall_table_32.S,  insert .long sys_systemcall, in the end
 
 4. /usr/src/linux-3.0.21-dev/arch/x86/include/asm/unistd_32.h, insert #define __NR_systemcall number
 
 5. copy unistd_32.h to /usr/include/i386-linux-gnu/asm
 
 6. sudo make
 
 7. grep "syscall" System.map
 
 8. sudo make modules_install
 
 9. sudo make install

10. sudo update-grub

11. boot with kernel linux-3..-dev
12. create syscall_wrapper.h file int syscall_wrapper(void)

13. create syscall_wrapper.c

14. create static library 

/*

    gcc -Wall -c mylist.c -o mylist.o
  
    ar rcs libmylist.a mylist.o

*/


