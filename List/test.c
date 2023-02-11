#include <stdio.h>

int main(void){
    int a = 5;
    int *p = &a;

    printf("p = &a = %p\n", p);
    printf("&p     = %p\n", &p);

    return 0;
}