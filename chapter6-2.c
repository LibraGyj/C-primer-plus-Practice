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
}  //脑壳疼...第六章题目怎么这么多呢？ 
