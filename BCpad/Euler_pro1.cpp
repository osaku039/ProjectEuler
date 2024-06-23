//1000–¢–ž‚Ì3‚Ü‚½‚Í5‚Ì‚·‚×‚Ä‚Ì”{”‚Ì‡Œv
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int m;
	
	m = 0;
	
	printf(">>");
	scanf("%d", &y);
	
	m = 0;
	
	for(x = 3; x < y; x++){
		if(x % 3 == 0 || x % 5 == 0){
			printf("%d\n", x);
			m += x;
		}
	}
	
	printf("%d", m);
	
	return (0);
}
