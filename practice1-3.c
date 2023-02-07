#include <stdio.h>

int main(void)
{
    int x = 100, y = 200;
    int *p1 = &x;
    int *p2 = &y;
    int *temp;

    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("*p1の値=%d\n", *p1);
    printf("*p2の値=%d\n", *p2);

    return 0;
}