#ifndef WOLFLIBC_SYSCALLS_H
#define WOLFLIBC_SYSCALLS_H

#include "types.h"

#define SYS_READ  0
#define SYS_WRITE 1
#define SYS_OPEN  2
#define SYS_CLOSE 3

#define SYS_EXIT 60

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void exit(int code);

#endif