//2024/04/16
//2024/04/18　正解済み
//積が最大になる連続する13個の数字を見つける
//fseek(fp, -N, seek_cur)を使っていたが、正しい値が出てこなかった
//fseek(fp, a, seek_str)にしたら正解が出てきた。けどaの値が1000超えたのが謎


#include <stdio.h>
#include <stdlib.h>

#define N 13

int main(void)
{
    FILE *fp = NULL;
    int n;
    int x[N];
    long long int sum = 1;
    long long int ans = 0;
    int a = 1;

    fp = fopen("pro8_data.txt", "r");
    if (fp == NULL){
        printf("File IO Error!\n");
        exit(EXIT_FAILURE);
    }

    while(1){
        //ポイントは、%dではなく、%1dにすること!
        printf("%d : ", a);
        for(n = 0; n < N; n++){
            fscanf(fp, "%1d", &x[n]);
            sum = sum * x[n];
            printf("%d", x[n]);
        }
        if (1){
            printf(" %lld\n", sum);
        }

        if(fscanf(fp, "%1d", &x[n]) == EOF){
            break;
        }
        else if(sum > ans){
            ans = sum;
        }

        sum = 1;
        
        a++;

        fseek(fp, a, SEEK_SET);

    
    }


// continueは使えそう 次のに行くやつ
    printf("\n");


    printf("\nsum = %lld", ans);
    fclose(fp);

    return(0);
}