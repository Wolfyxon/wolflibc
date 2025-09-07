#ifndef WOLFLIBC_STRING_H
#define WOLFLIBC_STRING_H

#include "types.h"

size_t strlen(char* str);
bool streq(char* a, char* b); // I hate strcmp()

#endif