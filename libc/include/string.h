/**
 * STRING.H - GSO-OS String Utilities Header
 * Declares memory and string handling functions.
 */
#ifndef __GSO_STRING_H
#define __GSO_STRING_H

#include <stddef.h> // for size_t

// Memory functions
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);

// String functions
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
// ... more string functions ...

#endif // __GSO_STRING_H
