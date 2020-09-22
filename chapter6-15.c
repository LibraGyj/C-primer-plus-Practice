#include <stdio.h>
int main(void)
{
	const int MAX = 254;
	char shuru[MAX];
	int max, AMAX;
	
	printf("请输入字符串的长度：");
	scanf("%d", &AMAX);
	while(0 < AMAX <= MAX)
	{
		printf("请输入一行字符："); 
	    for(max = 0; max <= AMAX; max++)
	    	scanf("%c", &shuru[max]);
	    for(max = AMAX; max >=0; max-- )
	    	printf("%c", shuru[max]);		
	}
	printf("Done!");
	
	return 0;
}   //最后三道题了 胜利的曙光 (*^▽^*) 
    
    
