//値が400万を超えないフィナボッチ数列の項の中で偶数の値の合計。
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int a;
	int b;
	int c;
	
	printf(">>");
	scanf("%d", &x);
	
	a = 1;
	b = 0;
	y = 0;
	c = 0;
	
	while(1){
		c = b;
		b += a;
		if(b >= x){
			break;
		}
		
		printf("%d\n", b);
		a = c;
		if(b % 2 == 0){
			y += b;
		}
	}
	
	printf("\n%d", y);
	
	return (0);
}
