#include <string.h>
#include <stdio.h>

int foo(char *bar, int *ok) {
    printf("foo got: '%s'\n", bar);
    if(strcmp(bar, "42") == 0) {
        *ok = 1;
        return 42;
    }
    else {
        *ok = 0;
        return -1;
    }
}

