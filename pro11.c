//2024/04/18
//縦横斜めの中で最大の積を持つ4この数字を探す

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    int j;
    int data[20][20];
    FILE *fp = NULL;

    fp = fopen("pro11_data.txt", "r");
    if (fp == NULL){
        printf("File IO Error!\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < 20; i++){
        while(fscanf(fp, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &data[i][1], &data[i][2], &data[i][3]));
    }
}