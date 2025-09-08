#include "main.h"

extern int main(int argc, char **argv, char** envp);

void _start(void) {
    // TODO: Get argc, argv and call main()

    int argc = 0;
    char** argv;
    char** envp;

    int code = main(argc, argv, envp);
    exit(code);
}
