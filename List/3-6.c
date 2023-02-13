#include <stdio.h>

int main(void)
{
    int i, j;
    int a[3, 2]; // コンパイルエラー

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}