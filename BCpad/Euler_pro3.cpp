//�f��������������v���O����
//�������傫�������̂ŁA�V�����^�Along long int�^���g���B
//�����̂����� longlongint�^�͎g���Ȃ��������炿���Ɛ搶�Ɏ��₷�邱�ƁI
//�ߋ��̂����� �ł�����I
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
				printf("%d�A", a);
				
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
