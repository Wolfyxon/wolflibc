#include "string.h"

size_t strlen(char* str) {
    size_t i = 0;

    while(str[i] != NULL) {
        i++;
    }

    return i;
}

bool streq(char* a, char* b) {
    size_t i = 0;

    while(a[i] != NULL) {
        if(a[i] != b[i]) {
            return false;
        }

        i++;
    }

    return true; 
}
