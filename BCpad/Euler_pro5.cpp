//1~20‚Ì‚·‚×‚Ä‚Ì”‚ÅŠ„‚èØ‚ê‚éÅ¬‚Ì³‚Ì”
//Š®¬”Å
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
				printf("%d = Z", a);
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
