//10001番目の素数
#include <stdio.h>

int main(void)
{
	int x;//奇数用
	int y;//判断用
	int l;//数える用
	int a;//番号用
	int b;
	int c;
	
	x = 2;
	l = 0;
	c = 1;
	
	printf(">>");
	scanf("%d", &a);
	
	while(1){
		y = 2;
		b = 1;
		
		while(1){
			if(x == y){
				l = l + 1;
				printf("%d  ", x);
				break;
			}
			if(x % y == 0){
				break;
			}
			y = 2 * b + 1;
			b++;
		}
		
		if(l == a){
			break;
		}
		
		x = 2 * c + 1;
		c++;
		
	}
	
	printf("%d番目の素数は%dです。\n", l, x);
	
	return (0);
}
