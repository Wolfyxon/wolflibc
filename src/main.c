#include "main.h"

void _start(void) {
    // TODO: Get argc, argv and call main()

    int argc = 0;
    char** argv;
    char** envp;

    int code = main(argc, argv, envp);
    exit(code);
}
