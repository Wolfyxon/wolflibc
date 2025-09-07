#include "exit.h"

void exit(int code) {
    while(1) {
        asm(
            "mov %0, %%rax \n"
            "mov %1, %%rdi \n"
            "syscall"
            :
            : "r" ((uintptr_t) SYS_EXIT),
              "r" ((uintptr_t) code)
            : "%rax", "%rdi" 
        );
    }
}
