#ifndef WOLFLIBC_STRING_H
#define WOLFLIBC_STRING_H

#include "types.h"

char* strstr(char* str, char* find);
size_t strlen(char* str);
bool streq(char* a, char* b); // I hate strcmp()

#endif