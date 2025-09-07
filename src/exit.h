#ifndef WOLFLIBC_EXIT_H
#define WOLFLIBC_EXIT_H

#include "syscalls.h"
#include "types.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void exit(int code);

#endif