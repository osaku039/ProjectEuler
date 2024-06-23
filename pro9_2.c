//2022/11/21
//原始ピタゴラス数の法則を教わったのでそれでやってみる
//n > m の任意の数字2つを用意する。
//a = n^2 - m^2, b = 2nm, c = n^2 + m^2.
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int m, n;
    int f = 0;

    m = 1;
    n = 1;
    for(m = 1; m < 30; m++){
        for(n = 1; n < m; n++){
            a = (m * m) - (n * n);
            b = 2 * n * m;
            c = (m * m) + (n * n);
            if(a + b + c == 1000){
                printf("a = %d, b = %d, c = %d\n", a, b, c);
                printf("\n積 = %d", a * b * c);
                f = 1;
                break;
            }
        }

        if(f == 1){
            break;
        }
    }

    return (0);
}