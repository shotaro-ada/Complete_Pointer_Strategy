#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    double a, b;

    puts("二つの実数を入力してください。");

    printf("実数A : ");
    scanf("%lf", &a);

    printf("実数B : ");
    scanf("%lf", &b);

    swap(&a, &b);

    puts("実数AとBの値を交換しました。");
    printf("Aの値は%.2fです。\n", a);
    printf("Bの値は%.2fです。\n", b);
    
    return 0;
}