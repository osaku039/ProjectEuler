//10001�Ԗڂ̑f��
#include <stdio.h>

int main(void)
{
	int x;//��p
	int y;//���f�p
	int l;//������p
	int a;//�ԍ��p
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
	
	printf("%d�Ԗڂ̑f����%d�ł��B\n", l, x);
	
	return (0);
}
