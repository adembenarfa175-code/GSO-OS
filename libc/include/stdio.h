/**
 * STDIO.H - GSO-OS Standard Input/Output Header
 * Defines basic I/O functions that the kernel will implement.
 */
#ifndef __GSO_STDIO_H
#define __GSO_STDIO_H

#include <stddef.h> // for size_t

// --- Standard Output Functions (Implemented by the Kernel/GUI driver) ---
int putchar(int c);
int printf(const char *format, ...);
int puts(const char *s);

// --- Standard Input Functions (Implemented by the Kernel/Driver) ---
int getchar(void);

#endif // __GSO_STDIO_H
