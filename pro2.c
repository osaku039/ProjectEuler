//n番目までのフィボナッチ数列の和を求める

#include <stdio.h>

int main(void)
{
    int f1; //フィボナッチ数列の1つ目の変数
    int f2; //フィボナッチ数列の2つ目の変数
    int f; //数を仮置きする所
    int n;  //上限＜入力される＞
    int t; //数の合計

    printf(">>");
    scanf("%d", &n); 
    
    f1 = 1;
    f2 = 0;
    f = 0;
    t = 0;

    while(1){
        f = f1 + f2;

        if(f > n){
            break;
        }
        printf("%d  ", f);
        if(f % 2 == 0){
            t = t + f;
            printf("\n%d\n", t);
        }
        f1 = f2;
        f2 = f;
    }
    
    printf("total:%d", t);

    return (0);
}