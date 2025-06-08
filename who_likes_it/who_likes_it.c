//
// Created by dstordev on 6/8/2025.
//

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *sprintf_alloc(const char *format, ...) {
    va_list args;
    va_start(args, format);
    const int len = vsnprintf(NULL, 0, format, args);
    va_end(args);

    if (len < 0) return NULL;

    char *buf = malloc(len + 1);
    if (buf == NULL) return NULL;

    va_start(args, format);
    vsnprintf(buf, len + 1, format, args);
    va_end(args);

    return buf;
}

char *likes(size_t n, const char *const names[n]) {
    char *buf;
    switch (n) {
        case 0: {
            buf = sprintf_alloc("no one likes this");
            break;
        }
        case 1: {
            buf = sprintf_alloc("%s likes this", names[0]);
            break;
        }
        case 2: {
            buf = sprintf_alloc("%s and %s like this", names[0], names[1]);
            break;
        }
        case 3: {
            buf = sprintf_alloc("%s, %s and %s like this", names[0], names[1], names[2]);
            break;
        }
        default: {
            buf = sprintf_alloc("%s, %s and %lu others like this", names[0], names[1], n - 2);
            break;
        }
    }

    return buf;
}
