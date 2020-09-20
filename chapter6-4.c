#include<stdio.h>
int main(void)
{
	const int HANG = 6;
	char apl;
	int hang, n;
	
	for(hang = 0; hang < HANG; hang++)
	{
		for(n=hang*(hang + 1)/2, apl = 6; apl <= HANG + hang;n++,apl++)
		   printf("%c", 'A' + n);
		printf("\n");
	}
	return 0;
} //虽然这个程序并不难，但在写这个程序时好几次忍住没看答案，所以值得纪念下，哈哈，keep going 
