#include <stdio.h>
int main(void)
{
	const int MAX = 254;
	char shuru[MAX];
	int max, AMAX;
	
	printf("�������ַ����ĳ��ȣ�");
	scanf("%d", &AMAX);
	while(0 < AMAX <= MAX)
	{
		printf("������һ���ַ���"); 
	    for(max = 0; max <= AMAX; max++)
	    	scanf("%c", &shuru[max]);
	    for(max = AMAX; max >=0; max-- )
	    	printf("%c", shuru[max]);		
	}
	printf("Done!");
	
	return 0;
}   //����������� ʤ������� (*^��^*) 
    
    
