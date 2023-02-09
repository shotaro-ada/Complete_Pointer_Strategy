#include <stdio.h>

void scan2acdint(int *a, int *b)
{
    if (*a > *b || *a == *b)
    {
        printf("整数B入力してください。: ");
        scanf("%d", b);
        scan2acdint(a, b);
    }
}

int main(void)
{
    int a, b;

    puts("二つの整数A,Bを昇順に入力して下さい。");

    printf("整数A入力してください。: ");
    scanf("%d", &a);

    printf("整数B入力してください。: ");
    scanf("%d", &b);

    scan2acdint(&a, &b);

    puts("二つの整数が昇順で入力されました。");

    return 0;
}