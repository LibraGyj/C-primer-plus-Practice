#include<stdio.h>
int main(void)
{
	char ch;
	char space = ' ';
	char a = 'A';
	char x;
	int i, j, n, k, l;    
	
	printf("Please enter a capital letter��\n");
	scanf("%c", &ch);
	
	n = ch - 64;   //A��ASCII��ֵΪ65���������Ĳ��� 
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= n-i; j++)   //�ո�����������һ��ʼ����ˣ���ΪʲôҪ������������ĸ��ġ��ո��أ����� 
		{
			putchar(space);
		}
		
		a = 'A';   //����ѭ������Ϊ��ʹÿ�δ�A��ʼ 
		for(k = 0; k <= i; k++)   //���� ������򵥣���i����i��������ĸ 
		{
			printf("%c", a);
			a++;
		}
		
		x = 64 + i;    //
		for(l=i; l > 0; l--)   //���� 
		{
			printf("%c", x);
			x--;
		}
		printf("\n");
	} 
	
	
	return 0;      //�����Ŀ���븴���ˣ���ʵҲ��һ��������������Ĺ��̣��Ұ��ұߵ��ַ�Ҳ���ǽ�����...�� 
 }
