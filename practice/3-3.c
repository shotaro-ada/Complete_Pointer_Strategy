#include <stdio.h>

void fill(int a[][2][4], int n, int v)
{
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                a[i][j][k] = v;
            }
        }
    }
}

int main(void)
{
    int i, j, k, no;
    int mx[3][2][4] = {0};

    printf("代入する値: ");
    scanf("%d", &no);

    fill(mx, 3, no);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("%3d", mx[i][j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}