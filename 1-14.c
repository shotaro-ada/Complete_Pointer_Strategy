#include <stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");

    printf("整数A :");
    scanf("%d", &a);

    printf("整数B :");
    scanf("%d", &b);

    swap(a, b);

    puts("整数AとBの値を交換しました。");
    printf("Aの値は%dです。", a);
    printf("Aの値は%dです。", b);

    return 0;
}