//2024/05/16
//2^1000の値を一文字ずつ足した数字

#include <stdio.h>

#define DIGIT 1000
#define LENGTH 10000000000

int main(void)
{
    long long int value[100];
    int x;
    int y;
    int tmp =0;
    int kuriagari = 0;
    int max_digit = 0;
    int answer = 0;

    //初期化
    for(x = 1; x < 100; x++){
        value[x] = 0;
    }
    value[0] = 1;

    for(y = 1; y <= DIGIT; y++){
        for(x = 0; x <= (max_digit + 1); x++){
            value[x] = value[x] * 2;
            value[x] = value[x] + kuriagari;

            kuriagari = 0;

            if((value[x] / LENGTH) != 0){
                kuriagari = value[x] / LENGTH;
                value[x] = value[x] % LENGTH;

                if((x+1) > max_digit){
                    tmp = x + 1;
                }   
            }
        }
        max_digit = tmp;
    }

    for(x = max_digit; x >= 0; x--){
        printf("%lld ", value[x]);
        for(y = 0; y < 10; y++){
            answer = answer + (value[x] % 10);
            value[x] = value[x] / 10;
        }
    }

    printf("\n%d", answer);

    return (0);
}