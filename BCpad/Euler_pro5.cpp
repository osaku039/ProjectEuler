//1~20のすべての数で割り切れる最小の正の数
//完成版
#include <stdio.h>

int main(void)
{
	int x;
	int lp;
	int a;
	int b;
	
	printf(">>");
	scanf("%d", &a);
	
	while(1){
		for(lp = 11; lp <= 20; lp++){
			if(a % lp != 0){
				break;
			}
			if(lp == 20){
				printf("%d = 〇", a);
				break;
			}
		}
		
		if(lp == 20){
			break;
		}
		a = a + 20;
	}
	
	return (0);
}
