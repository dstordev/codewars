#include <stdio.h>
#include <stddef.h>

size_t countBits(unsigned value) {
    size_t count = 0;
    for (; value; value >>= 1) if (value & 1) count++;
    return count;
}

int main(void) {
    const size_t count = countBits(9); // 2
    printf("%lli", count);
    return 0;
}
