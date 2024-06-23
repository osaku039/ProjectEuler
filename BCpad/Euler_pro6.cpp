//Å‰‚Ì100ŒÂ‚Ì”š‚Ì‚Qæ‚Ì˜a‚ÆÅ‰‚Ì100ŒÂ‚Ì”š‚Ì˜a‚Ì‚QæA‚Ì·
//Š®¬”Å
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
	
	printf("2æ‚Ì˜a = %d  ˜a‚Ì2æ = %d\n· = %d", a, b, y);
	
	return (0);
}
