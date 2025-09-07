#ifndef WOLFLIBC_STDIO_H
#define WOLFLIBC_STDIO_H

#include "types.h"
#include "syscalls.h"

#define STDIN 0
#define STDOUT 1
#define STDERR 2

void write(int loc, char* buf, size_t size);
void print(char* str);

#endif