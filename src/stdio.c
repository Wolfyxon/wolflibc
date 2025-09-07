#include "stdio.h"
#include "string.h"

int write(int loc, char* buf, int size) {
    int result;

    asm(
        "mov %1, %%rax \n"
        "mov %2, %%rdi \n"
        "mov %3, %%rsi \n"
        "mov %4, %%rdx \n"
        "syscall"
        : "=r" (result)
        : "r" ((uint64_t) SYS_WRITE),
          "r" ((uint64_t) loc),
          "r" ((uint64_t) buf),
          "r" ((uint64_t) size)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );

    return result;
}

void print(char* str) {
    write(STDOUT, str, strlen(str));
}
