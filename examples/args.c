#include "stdio.h"

int main(int argc, char** argv) {
    print("Command line arguments: \n");
    
    for(int i = 0; i < argc; i++) {
        print(argv[i]);
        print(" ");
    }

    print("\n");
}