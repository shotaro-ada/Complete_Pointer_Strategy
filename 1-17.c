#include <stdio.h>

void put_start(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        putchar('*');
    }
}

int main(void)
{
    int count;

    printf("何個表示しますか :");
    scanf("%d", &count);

    put_start(count);

    printf("\n%d個表示しました。\n", count);

    return 0;
}
