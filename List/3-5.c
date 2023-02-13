#include <stdio.h>

int main(void)
{
    int i, j;
    int a[3][2] = {0};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = %d      ", i, j, a[i, j]);
            printf("a[%d][%d] = %li\n", i, j, (unsigned long)a[i, j]);
        }
    }

    return 0;
}
