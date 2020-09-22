#include <stdio.h>
int main(void)
{
	const int S = 7, Z = 7;
	int shuru[S], zonghe[Z], sum;
	int s, z;
	
    for(s = 0; s <= S; s++)
    {
    	printf("请输入第%d个数字:\n", s+1);
    	scanf("%d", &shuru[s]);
	}
	for(z = 0,s = 0; z <= Z; z++, s++)
	{
		sum += shuru[s];
		zonghe[z] = sum;
	}
	s = 0;
    while(s <= S)
    {
    	printf("%d\t", shuru[s]);
    	s++;
	}
	printf("\n");
 
    z = 0;
    while(z <= Z)
    {
    	printf("%d\t", zonghe[z]);
    	z++;
	}
    
    return 0;
}//还有最后四道题...加油(*^▽^*)
    
    
    
