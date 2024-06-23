//2024/04/17
//積が最大になる連続する13個の数字を見つける
//一個割って一個かけるタイプ

#include <stdio.h>
#include <stdlib.h>

#define N 13

int main(void)
{
    FILE *fp = NULL;
    int n;
    int next = 0;
    int x[N];
    long long int sum = 1;
    long long int ans = 0;
    int current;

    fp = fopen("pro8_data.txt", "r");
    if (fp == NULL){
        printf("File IO Error!\n");
        exit(EXIT_FAILURE);
    }

    for (n = 0; n < N; n++){
        fscanf(fp, "%1d", &x[n]);
        sum *= x[n];
    }

    while(1){

        next = fscanf(fp, "%1d", &x[n]);

        if(next == EOF){
            break;
        }
        else{
            if (x[0] == 0){
                for(n = 1; n < N; n++){
                    sum *= x[n];
                }
            }
            else{
                sum /= x[0];
            }

            for(n = 0; n < N; n++){
                x[n-1] = x[n];
                printf("%d", x[n]);
            }
            x[12] = next;

            sum *= x[12];
            printf("  %lld\n", sum);
        }
        
        if(sum > ans){
            ans = sum;
            printf(" //");
        }

        printf("\n");
    
    }


// continueは使えそう 次のに行くやつ
    printf("\n");


    printf("\nsum = %lld\n", ans);
    fclose(fp);

    return(0);
}