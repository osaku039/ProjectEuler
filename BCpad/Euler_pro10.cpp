#include <stdio.h>

int main(void)
{
	int num;
	int a;
	int loop;
	int total;
	
	total = 2;
	
	printf(">>");
	scanf("%d", &loop);
	
	
	
	for(num = 2; num < loop; num++){
		a = 2;
		while(1){
			if(num % a == 0){
				break;
			}
			a++;
			if(a == num){
				total = total + num;
				break;
			}
		}
	}
	
	printf("total = %d\n", total);
	
	return (0);
}
