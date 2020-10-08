#include<stdio.h>
#define SPACE ' '
#define LINEBREAK '\n'

int main (void)
{
	char ch;
	int count_space = 0;
	int count_linebreak = 0;
	int count_others = 0;
	
	printf("请输入一段话，并以#结尾：\n");
	
	while((ch = getchar()) != '#')
	{
		if(ch == SPACE)
		   count_space = count_space + 1;
		else if (ch == LINEBREAK)
		   count_linebreak = count_linebreak + 1;	
		else
		   count_others = count_others + 1;	
	}
	printf("这段话中，空格的个数是%d,转行符的个数是%d,其他字符的个数是%d。\n", count_space, count_linebreak, count_others);
	
	return 0;
}

