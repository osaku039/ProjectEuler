//2024/05/14
//ファイルの1行ずつ書かれた数字の和の最初の10桁を表示する
//改行は2bit分なのか?キャリッジリターン文字が含まれているのか?
//2024/05/16解決済み

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10000000000
#define LINES 101

int main(void)
{
    FILE *fp = NULL;
    long long int number[5];
    long long int sum[6] = {0,0,0,0,0,0};
    int carry[5] = {0,0,0,0,0};
    int x = 0;
    int y = 0;

    fp = fopen("pro13_data.txt", "r");
    if (fp == NULL){
        printf("File IO Error!\n");
        exit(EXIT_FAILURE);
    }

    for(y = 0; y < 100; y++){
        fseek(fp, (52*y), SEEK_SET);
        
        for(x = 4; fscanf(fp, "%10lld", &number[x]) != EOF && x >= 0; x--){
            
            sum[x] += number[x];
            printf("%lld ", number[x]);
            //printf("%lld ", number[x]);
            //if((sum[x] / LENGTH) != 0){
            //    //carry[x] = (sum[x] / LENGTH);
            //    sum[x] = sum[x] % LENGTH;
            //    //sum[x+1] = sum[x+1] + carry[x];   
            //    sum[x+1] += 1;             
            //}
        }

        printf("\n");
    }
    sum[5] = 0;

//    fseek(fp, 104, SEEK_SET);
//    fscanf(fp, "%10lld", &number[0]);
//    printf("%lld", number[0]);

    for(x=0;x < 5; x++){
        if((sum[x] / LENGTH) != 0){
            carry[x] = (sum[x] / LENGTH);
            sum[x] = sum[x] % LENGTH;
            sum[x+1] = sum[x+1] + carry[x];
        }
    }


    printf("\n");
// continueは使えそう 次のに行くやつ

    for(x = 5; x >= 0; x--){
        printf("%lld ", sum[x]);
    }
    fclose(fp);

    return(0);
}