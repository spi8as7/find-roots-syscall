#include <unistd.h>
#include <sys/syscall.h>
#include "roots.h"

int find_roots_wrapper(void) {
	return ( syscall(__NR_find_roots) );
}


