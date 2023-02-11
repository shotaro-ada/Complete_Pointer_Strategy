#include <stdio.h>

int sum123(const int *p)
{
    // p[2] = 10 コンパイルエラー
    //  const を伴って宣言されたポインタの指す先には値を書き込めない。
    
    return p[0] + p[1] + p[2];
}

int main(void)
{
    int a[] = {1, 3, 5};

    printf("a[0] + a[1] + a[2] = %d\n", sum123(a));

    return 0;
}