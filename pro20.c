//2023/04/11
//n!を計算してそれを一桁ずつ数字を足していくプログラム

//プログラム自体はできたけどオーバーフローしてしまいます。

#include <stdio.h>

int main(void)
{
    int n;
    unsigned long int ex = 1;
    int x;
    int y; //割ったりする数
    int ans = 0;

    printf(">>");
    scanf("%d", &n);

    for (x = 1; x < n; x++){
        ex *= x;
        printf("%lu * %d    ", ex, x);
    }

    printf("\n Answer : %lu\n", ex);
    
    while (ex >= 1){
        ans += (ex % 10);
        printf("%lu + ", ex % 10);
        ex = ex / 10;
    }

    printf("\n Final Answer : %d", ans);


    return (0);
}