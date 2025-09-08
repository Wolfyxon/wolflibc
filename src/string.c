#include "string.h"

char* strstr(char* str, char* find) {
    size_t strLen = strlen(str);
    size_t findLen = strlen(find);

    if(findLen > strLen) {
        return NULL;
    }

    for(size_t i = 0; i < strLen; i++) {
        for(size_t j = 0; j < findLen; j++) {
            char sc = str[i + j];
            char fc = find[j];

            if(sc != fc) {
                break;
            }

            if(i == findLen - 1) {
                return str + i;
            }
        }
    }
    
    return NULL;
}

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
