#include <stdio.h>

int main(void)
{
	long int x;
	long int y;
	
	printf(">>");
	scanf("%ld", &x);
	
	printf("y>>");
	scanf("%ld", &y);
	
	printf("%ld", x / y);
	
	return (0);
}
