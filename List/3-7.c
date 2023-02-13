#include <stdio.h>

void fill(int a[2][3], int v)
{
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = 0;
        }
    }
}

int main(void)
{
    int i, j, no;
    int x[2][3] = {0};

    printf("全構成要素に代入する値 : ");
    scanf("%d", &no);

    fill(x, no);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", x[i][j]);
        }
        putchar('\n');
    }

    return 0;
}