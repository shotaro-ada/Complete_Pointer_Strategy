#include <stdio.h>

int main(void)
{
    double n;
    double *ptr = &n;

    printf("実数を入力してください。:");
    scanf("%lf", ptr);

    printf("あなたは%0.2fと入力しましたね。\n", n);

    return 0;
}