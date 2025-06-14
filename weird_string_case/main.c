#include <stdio.h>
#include <string.h>

#include "weird_string_case.h"

int main(void) {
    if (strcmp("StRiNg", to_weird_case(strdup("String"))) != 0) return 1;
    if (strcmp("", to_weird_case(strdup(""))) != 0) return 1;
    if (strcmp("WeIrD StRiNg CaSe", to_weird_case(strdup("Weird string case"))) != 0) return 1;
    if (strcmp("A Aa AaA AaAa", to_weird_case(strdup("a aa aaa aaaa"))) != 0) return 1;
    if (strcmp("A Aa AaA AaAa", to_weird_case(strdup("A AA AAA AAAA"))) != 0) return 1;
    if (strcmp("A Aa AaA AaAa", to_weird_case(strdup("A Aa AaA AaAa"))) != 0) return 1;
    if (strcmp("A Aa AaA AaAa", to_weird_case(strdup("a aA aAa aAaA"))) != 0) return 1;
    return 0;
}
