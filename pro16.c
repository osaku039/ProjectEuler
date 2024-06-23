//2022/11/21
//2^15 = 32768で、桁の数字の合計は3+2+7+6+8 = 26です。2^1000の桁の数字の合計は？

//2022/11/25  unsigned long long int型でもこの答えはオーバーフローするからどうすればいいかわかんない！！！

#include <stdio.h>

int main(void)
{
    long long int x = 1;
    int n;
    int r;
    int g;

    printf("n乗 >>");
    scanf("%d", &n);

    for(r = 1; r <= n; r++){
        x *= 2;
        if((n / 2 == r) && (n % 2 == 0)){
            x = x * x;
            break;
        }
        else if((n / 2 == r) && (n % 2 == 1)){
            x = x * x;
            x *= 2;
            break;
        }
    }

    printf("A = %lld", x);

    return (0);
    
}