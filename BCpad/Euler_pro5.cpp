//1~20�̂��ׂĂ̐��Ŋ���؂��ŏ��̐��̐�
//������
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
				printf("%d = �Z", a);
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
