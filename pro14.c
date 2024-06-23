//2022//11/11
//コラッツ問題において、最初の値が100万以下の時、一番長い鎖になる値は？
//コラッツ問題とは、n = n / 2(nが偶数)、n = 3n + 1(nが奇数)を繰り返していくと最終的に1に収束するというもの。
#include <stdio.h>

int main(void)
{
    int k;
    long long int n;
    int t = 0;
    int tk = 0;
    int tt;

    for(k = 1; k <= 1000000; k++){
        n = k;
        tt = 0;

        //nが偶数の時と奇数の時の行動
        while(n != 1){
            if((n % 2) == 0){
                n = n / 2;
            }
            else if((n % 2) != 0){
                n = 3 * n + 1;
            }
            tt++;
        }

        printf(".");

        //もし今までより回数が多かったら
        if(t <= tt){
            t = tt;
            tk = k;
            printf("%d", tk);
        }
    }

    printf("最大の鎖の数：%d\nその時の初期値：%d\n", t, tk);

    return(0);
}