#include <stdio.h>

int main(void)
{
    int x[5];
    int *p = &x[2];

    printf(" x      - &x[1] : %d\n", (int)(x - &x[1]));
    printf(" &x[2]  - &x[0] : %d\n", (int)(&x[2] - &x[0]));
    printf(" &x[4]  - p     : %d\n", (int)(&x[4] - p));
}