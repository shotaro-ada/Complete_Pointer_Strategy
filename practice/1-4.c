#include <stdio.h>

int main(void)
{
    int x = 55;
    int *p = &x;
    printf("%d\n", 5 * *p);

    return 0;
}