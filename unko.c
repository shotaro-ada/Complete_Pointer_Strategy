#include <stdio.h>

int main(void){
    int n1, n2;
    int *p;

    p = &n1;
    *p = 123;

    printf("%d\n", n1);
}