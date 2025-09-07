#include "string.h"

size_t strlen(char* str) {
    size_t i = 0;

    while(str[i] != NULL) {
        i++;
    }

    return i;
}