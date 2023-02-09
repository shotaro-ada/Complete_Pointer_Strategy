#include <stdio.h>

void swap(double *x, double *y, double *z)
{
    double temp;

    if (*x >= *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }

    if (*y >= *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }

    if (*z >= *x)
    {
        temp = *z;
        *z = *x;
        *x = temp;
    }
}

void sort3d(double *x1, double *x2, double *x3)
{
    if (!(*x1 <= *x2 && *x2 <= *x3))
    {
        swap(x1, x2, x3);
    }
}

int main(void)
{
    double a, b, c;

    puts("三つの実数を入力してください。");

    printf("A:");
    scanf("%lf", &a);

    printf("B:");
    scanf("%lf", &b);

    printf("C:");
    scanf("%lf", &c);

    sort3d(&a, &b, &c);

    printf("A:%f\nB:%f\nC:%f\n", a, b, c);

    return 0;
}