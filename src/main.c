#include "main.h"

__attribute__((naked))
void _start(void) {
    register long *rsp asm("rsp");
    
    int argc = (int) rsp[0];
    char** argv = (char**) &rsp[1];
    char** envp = (char**) &rsp[1 + argc + 1];

    int code = main(argc, argv, envp);
    exit(code);
}
