//n未満の3または5の全ての倍数の合計

#include <stdio.h>

int main(void)
{
    int n;
    int r;
    int t;

    t = 0;

    printf("上限>>");
    scanf("%d", &r);

    for(n = 1; n < r; n++){
        if(n % 3 == 0 || n % 5 == 0){
            t = t + n;
        }
    }

    printf("合計= %d\n", t);

    return (0);

}