//2022/11/04
//(a+b+c=1000)かつ(a^2+b^2=c^2)を満たすabcを求めるプログラム
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    int c;
    int r;

    for(a = 1; a < 500; a++){
        for(b = 1; b < 500; b++){
            if(((a / 2 == 0) && (b / 2 == 0)) || ((a / 2 == 1) && (b / 2 == 1))){
                for(c = 2; c < 600; c = c + 2){
                    if((c * c) == (a * a) + (b * b)){
                        if(a + b + c == 1000){
                            printf("積: %d", a * b * c);
                            printf("        ");
                            printf("a : %d, b : %d, c = %d\n", a, b, c);
                            exit(0);
                        }
                    }
                }
            }
            else{
                for(c = 2; c < 600; c++){
                    if((c * c) == (a * a) + (b * b)){
                        if(a + b + c == 1000){
                            printf("積: %d", a * b * c);
                            printf("a : %d, b : %d, c = %d\n", a, b, c);
                            exit(0);
                        }
                    }
                }
            }
        }
    }
}