#include <stdio.h>

int main(void)
{
    int i;
    int a[5];
    int *p = &a[2];

    for (i = 0; i < 5; i++)
    {
        printf("&a[%d] = %p     ", i, &a[i]);

        if (i - 2 == 0)
        {
            printf("p   = %p\n", p + i - 2);
        }
        else
        {
            printf("p%+d = %p\n", i - 2, p + i - 2);
        }
    }
}