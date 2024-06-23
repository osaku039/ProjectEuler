#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int lp;
	int a;
	
	printf(">>");
	scanf("%d", &a);
	
		for(lp = 1; lp <= 10; lp++){
			if(a % lp != 0){
				printf("~");
				break;
			}
			if(lp == 10){
				printf("Z");
				break;
			}
		}
		
		
	return (0);
}
