#include <stdio.h>

int main(void){
    int a[3][3][3];

    printf("aの構成要素数は%dです。\n",
    (int)(sizeof(a) / sizeof(a[0][0][0])));

    return 0;
}