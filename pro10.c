//2022/11/08
//200万以下の全ての素数の合計
//数n以下のすべての素数の合計

#include <stdio.h>

int main(void)
{
    int n;
    int x = 3;
    int y;
    long long int sum = 2;
    
    printf("n >>");
    scanf("%d", &n);

    while(x <= n){
        for(y = 2; y <= x; y ++){
            if(x < (y * y)){
                sum = sum + x;
                printf(" %d", x);
                break;
            }
            if(x % y == 0){
                break;
            }
        }
        x = x + 2;
    }

    printf("\n合計 = %lld", sum);

    return (0);
}