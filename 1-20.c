#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort2(int *n1, int *n2)
{
    if (*n1 > *n2)
    {
        swap(n1, n2);
        puts("昇順にソートしました。");
    }
}

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");

    printf("整数A :");
    scanf("%d", &a);

    printf("整数B :");
    scanf("%d", &b);

    sort2(&a, &b);
    
    printf("Aの値は%dです。\n", a);
    printf("Bの値は%dです。\n", b);

    return 0;
}
