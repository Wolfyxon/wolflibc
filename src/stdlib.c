#include "stdlib.h"

void exit(int code) {
    while(1) {
        asm(
            "mov %0, %%rax \n"
            "mov %1, %%rdi \n"
            "syscall"
            :
            : "r" ((uint64_t) SYS_EXIT),
              "r" ((uint64_t) code)
            : "%rax", "%rdi" 
        );
    }
}
