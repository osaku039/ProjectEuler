//2022/11/21
//20*20の正方形の左上から右下までの最短ルートは何通りあるか。
//たかえすしとゆうたちゃんと一緒にめっちゃ考えた
//求める式：2n C n

#include <stdio.h>

int main(void)
{
    int n;
    int l;
    long long int ru = 1;
    long long int reru = 1;
    long long int c;

    printf("正方形の一辺の長さ >>");
    scanf("%d", &n);

    for(l = 1; l <= n; l++){
        ru *= l;
        printf("%lld * %d    ", reru, 2 * n - (l - 1));
        reru *= 2 * n - (l - 1);

        if(reru % l == 0){
            reru /= l;
            ru /= l;
        }
        else if((l % 2 == 0) && (reru % 2 == 0)){
            reru /= 2;
            ru /= 2;
        }
    }
    printf("\n%lld / %lld\n", reru, ru);

    c = reru / ru;

    printf("最短ルートは%lld通りあります。\n", c);

    return (0);
}