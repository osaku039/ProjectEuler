//2022/11/09
//2022/11/10
//三角数について、約数が500を超える最小の数を求める。
#include <stdio.h>

int main(void)
{
    int num = 1;
    int tr = 2;
    int x;
    int div;
    int a;

    //求めたい約数の個数
    printf("divisor>>");
    scanf("%d", &a);

    while(1){
        div = 0;
        for(x = 1; (x * x) <= num; x++){

            //割り切れたら
            if((num % x) == 0){

                //割った数と割られた数が同じの時　例：9 = 3 * 3
                if(x == (num / x)){
                    div++;
                }
                else{
                    div += 2;
                }
            }
            printf("");
        }

        if(div >= a){
            printf("\nanswer = %d\ndivisors = %d\n", num, div);
            break;
        }

        num = num + tr;
        tr++;
    }

    return (0);
}