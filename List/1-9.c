#include <stdio.h>

int main(void)
{
    int n = 123;
    int *p = &n;

    printf(" nの値=%d\n", n);
    printf("*pの値=%d\n", *p);

    return 0;
}