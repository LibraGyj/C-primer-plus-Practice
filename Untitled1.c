#include<stdio.h>
#define SPACE ' '
#define LINEBREAK '\n'

int main (void)
{
	char ch;
	int count_space = 0;
	int count_linebreak = 0;
	int count_others = 0;
	
	printf("������һ�λ�������#��β��\n");
	
	while((ch = getchar()) != '#')
	{
		if(ch == SPACE)
		   count_space = count_space + 1;
		else if (ch == LINEBREAK)
		   count_linebreak = count_linebreak + 1;	
		else
		   count_others = count_others + 1;	
	}
	printf("��λ��У��ո�ĸ�����%d,ת�з��ĸ�����%d,�����ַ��ĸ�����%d��\n", count_space, count_linebreak, count_others);
	
	return 0;
}

