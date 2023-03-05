#include <stdio.h>

int main(void)
{
    int a[2][3];

    printf("sizeof(*a)      = %u\n", (unsigned)sizeof(*a));
    printf("sizeof(a[0])    = %u\n", (unsigned)sizeof(a[0]));
    printf("sizeof(a[0][0]) = %u\n", (unsigned)sizeof(a[0][0]));

    if (sizeof(*a) == sizeof(a[0]))
    {
        printf("aがa[0]を指していることが確認できました。\n");
    }
    else
    {
        printf("aがa[0][0]を指していることが確認できました。\n");
    }

    return 0;
}