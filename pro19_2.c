//2023/04/11
//問題を理解し間違えていた
//月の初めの日(1日)が日曜日の月は何回あるか求めるプログラム

#include <stdio.h>

int main(void)
{
    int mo;
    int all = 0;
    int ans = 0;
    int year;

    for(year = 1901; year <= 2000; year++){

        for(mo = 1; mo <= 12; mo++){
            if((mo == 4) || (mo == 6) || (mo == 9) || (mo == 11)){
                all += 30;
            }
            else if(mo == 2){
                if ((year % 4 == 0) && (year % 400 != 0)){
                    all += 29;
                }
                else{
                    all += 28;
                }
            }
            else{
                all += 31;
            }

            //月の最初が日曜日の時、答えをプラスする。
            if(all % 7 == 5){
                ans++;
                printf("%d ", (mo+1));

                if ((mo == 12) && (year == 1999)){
                    ans = ans - 1;
                }
            }

        }

    }

    printf("\n1年で%d回", ans);

    return (0);
}