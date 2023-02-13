#include <stdio.h>

int main(void)
{
    int i, j, k;
    int a[3][2][4] = {0};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("a[%d][%d][%d] = %d  ",
                       i, j, k, a[i][j][k]);
                printf("&a[%d][%d][%d] = %p\n",
                       i, j, k, &a[i][j][k]);
            }
        }
    }

    return 0;
}
