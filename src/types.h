#ifndef WOLFLIBC_TYPES_H
#define WOLFLIBC_TYPES_H

#define NULL 0

typedef unsigned long long int uint64_t;
typedef unsigned int size_t;

// TODO: Detect and adapt to 32 bit arch
typedef uint64_t uintptr_t;

#endif