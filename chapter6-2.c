#include <stdio.h>
int main(void)
{
	const int HANG = 5;
	const int LIE = 5;
	int hang, lie;
	
	for(lie = 0; lie < LIE; lie++)
	{
		for(hang = 5 + lie; hang >= HANG; hang--)
		    printf("$");
	    printf("\n");
	}
	
	return 0;
}  //�Կ���...��������Ŀ��ô��ô���أ� 
