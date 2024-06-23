//素因数分解をするプログラム
//数字が大きすぎたので、新しい型、long long int型を使う。
//未来のさくへ longlongint型は使えなかったからちゃんと先生に質問すること！
//過去のさくへ できたよ！
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int a;
	int b;
	
	
	printf(">>");
	scanf("%ld", &x);
	
	while(1){
		a = 2;
		b = 1;
		while(1){
			if(x % a == 0){
				if(a == 1){
					break;
				}
				printf("%d、", a);
				
				x /= a;
				break;
			}
			
			a = 2 * b + 1;
			b++;
		}
		
		if(x == 1){
			break;
		}
	}
		
	return (0);
}
