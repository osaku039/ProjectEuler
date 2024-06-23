//素因数分解をするプログラム

#include <stdio.h>

int main(void)
{
    int a;
    long long int n;
    long long int n1;

    printf(">>");
    scanf("%lld", &n);

    n1 = n;

    while(1){
        for(a = 2; a <= n1; a++){
            if(n1 % a == 0){
                printf("%d ", a);
                n1 = n1 / a;
                break;
            }
        }
        if(n1 == 1){
            break;
        }
    }
    return (0);
}