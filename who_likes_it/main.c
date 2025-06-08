#include <stdlib.h>
#include <string.h>
#include "who_likes_it.h"

int main(void) {
    // 1
    {
        if (strcmp("no one likes this", likes(0, NULL)) != 0) return 1;
    }
    // 2
    {
        const char *const names[] = {"Peter"};
        if (strcmp("Peter likes this", likes(ARR_LEN(names), names)) != 0) return 1;
    }
    // 3
    {
        const char *const names[] = {"Jacob", "Alex"};
        if (strcmp("Jacob and Alex like this", likes(ARR_LEN(names), names)) != 0) return 1;
    }
    // 4
    {
        const char *const names[] = {"Max", "John", "Mark"};
        if (strcmp("Max, John and Mark like this", likes(ARR_LEN(names), names)) != 0) return 1;
    }
    // 5
    {
        const char *const names[] = {"Alex", "Jacob", "Mark", "Max"};
        if (strcmp("Alex, Jacob and 2 others like this", likes(ARR_LEN(names), names)) != 0) return 1;
    }
    // 6
    {
        const char *const names[] = {"Alex", "Jacob", "Mark", "Max", "Peter"};
        if (strcmp("Alex, Jacob and 3 others like this", likes(ARR_LEN(names), names)) != 0) return 1;
    }

    return 0;
}
