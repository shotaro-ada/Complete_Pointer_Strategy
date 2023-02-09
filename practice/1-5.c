#include <stdio.h>

void sum_diff(int x, int y, int *wa, int *sa)
{
    *wa = x + y;
    *sa = x - y;
}

int main(void)
{
    int a, b;
    int sum, diff;

    printf("aの値を入力してください :");
    scanf("%d", &a);

    printf("bの値を入力してください :");
    scanf("%d", &b);

    sum_diff(a, b, &sum, &diff);

    printf("和は%d\n差は%d\n", sum, diff);

    return 0;
}