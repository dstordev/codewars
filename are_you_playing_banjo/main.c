#include <stdio.h>

#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name) {
    const char *suffix_play = " plays banjo";
    const char *suffix_no_play = " does not play banjo";

    char *buf = calloc(strlen(name) + strlen(suffix_no_play) + 1, sizeof(char));
    if (buf == NULL) {
        return NULL;
    }

    strcpy(buf, name);
    switch (name[0]) {
        case 'R':
        case 'r':
            strcat(buf, suffix_play);
            break;
        default:
            strcat(buf, suffix_no_play);
            break;
    }

    return buf;
}

int main(void) {
    char *data = are_you_playing_banjo("Roma");
    printf(data);

    free(data);
    return 0;
}
