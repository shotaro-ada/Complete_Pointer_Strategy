#include <stdio.h>

int main(void)
{
    int a[4][3];

    printf("sizeof(a)      = %u\n", (unsigned)sizeof(a));
    printf("sizeof(a[0])   = %u\n", (unsigned)sizeof(a[0]));
    printf("sizeof(a[0][0])= %u\n", (unsigned)sizeof(a[0][0]));

    return 0;
}