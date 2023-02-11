#include <stdio.h>

int main(void)
{
    register int a[5];

    printf("a[0]の値は%d\n", a[0]); 
    // a[0] は *(a+0) に等しい。 register によって宣言されたオブジェクトのアドレスは取得できないためコンパイルエラーを起こす。

    return 0;
}