#include <stdio.h>

int main(void)
{
    int n;
    int *p = &n;

    printf("&n : %p\n", &n);
    printf(" p : %lu\n", (unsigned long)p);
    // printf(" p : %u\n", (unsigned int)p);

    return 0;
}