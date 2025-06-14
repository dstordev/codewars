//
// Created by dstordev on 6/12/2025.
//

#include <ctype.h>
#include <string.h>

char *to_weird_case(char *string) {
    for (int i = 0, c = 0; i < (int) strlen(string); i++, c++) {
        const char ch = string[i];
        if (ch == 0x20) {
            c = 1;
            string[i] = ch;
            continue;
        }
        if (c & 1) string[i] = (char) tolower(ch);
        else string[i] = (char) toupper(ch);
    }
    return string;
}
