#include <stdio.h>

int main(void)
{
    int n;
    int *p;

    printf("%u\n", (unsigned)sizeof *p);
    printf("%u\n", (unsigned)sizeof &n);
    printf("%u\n", (unsigned)sizeof -1);
    printf("%u\n", (unsigned)sizeof(unsigned) - 1);
    printf("%u\n", (unsigned)sizeof(double) - 1);
    printf("%u\n", (unsigned)sizeof((double)-1));

    return 0;
}