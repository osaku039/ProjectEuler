//�ŏ���100�̐����̂Q��̘a�ƍŏ���100�̐����̘a�̂Q��A�̍�
//������
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int a;
	int b;
	
	a = 0;
	b = 0;
	
	for(x = 1; x <= 100; x++){
		a = a + x * x;
		b = b + x;
	}
	
	b = b * b;
	
	y = b - a;
	
	printf("2��̘a = %d  �a��2�� = %d\n�� = %d", a, b, y);
	
	return (0);
}
