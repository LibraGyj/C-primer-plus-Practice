#include <stdio.h>
#include <math.h>
int main(void)
{
	const float danli = 0.1, fuli = 0.05;
	float da_zijin, de_zijin;
	int benjin = 100, n = 0;

    da_zijin = 100;
	de_zijin = 100;
	do
	{
		da_zijin += benjin * 0.1;
		de_zijin *= 1.05;
		n++;
	}while(de_zijin < da_zijin);
	printf("%d   %f    %f", n, da_zijin, de_zijin);
	
	return 0; 
}
