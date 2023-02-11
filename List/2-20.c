#include <stdio.h>

int seq_search(int *a, int n, int key)
{
    int *p = a;

    while (n-- > 0)
    {
        if (*p == key)
        {
            return p - a;
        }
        else
        {
            p++;
            // *p++;  でもいい
        }
    }

    return -1;
}

int main(void)
{
    int i, key, idx;
    int x[8];
    int x_size = sizeof(x) / sizeof(x[0]);

    for (i = 0; i < x_size; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    printf("探す値は : ");
    scanf("%d", &key);

    if ((idx = seq_search(x, x_size, key)) != -1)
    {
        printf("その値を持つ要素はx[%d]です\n", idx);
    }
    else
    {
        puts("みつかりませんでした。");
    }

    return 0;
}