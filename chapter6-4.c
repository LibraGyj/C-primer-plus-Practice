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
} //��Ȼ������򲢲��ѣ�����д�������ʱ�ü�����סû���𰸣�����ֵ�ü����£�������keep going 
