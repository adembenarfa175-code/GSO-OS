/**
 * GSO_TYPES.H - GSO-OS Base Types for 64-bit Kernel
 * Defines fundamental data types used throughout the kernel and OS.
 */
#ifndef GSO_TYPES_H
#define GSO_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

// --- Standard Types ---
typedef uint64_t phys_addr_t;  // Physical Address (64-bit)
typedef uint64_t virt_addr_t;  // Virtual Address (64-bit)
typedef uint64_t size_t;       // Size type (standard 64-bit)
typedef int64_t  ssize_t;      // Signed size type

// --- Process/Thread Management ---
typedef uint32_t pid_t;        // Process ID
typedef uint32_t tid_t;        // Thread ID

// --- Status/Error Codes ---
typedef enum {
    GSO_SUCCESS = 0,
    GSO_ERROR = -1,
    GSO_NOMEM = -2,
    GSO_NODEV = -3
} gso_status_t;

#endif // GSO_TYPES_H
