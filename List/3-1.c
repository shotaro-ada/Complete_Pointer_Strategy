#include <stdio.h>

int main(void)
{
    int i, j;
    int a[2][3] = {0};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = %d  ",
                   i, j, a[i][j]);
            printf("&a[%d][%d] = %d\n",
                   i, j, (unsigned)&a[i][j]);
        }
    }

    return 0;
}
