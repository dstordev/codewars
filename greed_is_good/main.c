#include <stdio.h>
#include "greed_is_good.h"

int main(void) {
    const int dice[5] = {6, 6, 6, 3, 3};
    const int result = score(dice);
    printf("%i\n", result);

    return 0;
}
