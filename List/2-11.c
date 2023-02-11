#include <stdio.h>

int main(void)
{
    int a[5];

    printf("aの要素数は%u\n", (unsigned)(sizeof(a) / sizeof(a[0])));
}