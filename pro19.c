//2022/12/19
//日曜日を数える
#include <stdio.h>

int sum(void);

int main(void)
{
    int ye;
    int sun = 0;
    int all = 0;//全体の
    int one;

    one = sum();

    for(ye = 1901; ye < 2001; ye++){
        if ((ye % 4 == 0) && (ye % 400 != 0)){
            all += (one+1);
        }
        else{
            all += one;
        }
    }
    

    //printf(">>");
    //scanf("%d", &all);
    

    // 1901/1/1は火曜日。
    if(all % 7 == 6){
        sun = (all / 7) + 1;
    }
    else{
        sun = (all / 7);
    }

    printf("日曜日は %d 回あります。\n", sun);

    return (0);

}

int sum(void)
{
    int mo;
    int all = 0;

    //1年間の日数を数える(うるう年ではない)
    for(mo = 1; mo <= 12; mo++){
        if((mo == 4) || (mo == 6) || (mo == 9) || (mo == 11)){
            all += 30;
        }
        else if(mo == 2){
            all += 28;
        }
        else{
            all += 31;
        }
        
    }

    return (all);
}