#include <stdio.h>

int main(void) {

    int n = 10;
    printf("%d,\n", n);
    printf("%d,\n", n = 15);
    printf("%d.\n", n);

    return 0;
}
