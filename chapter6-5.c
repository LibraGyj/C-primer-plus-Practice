#include<stdio.h>
int main(void)
{
	char ch;
	char space = ' ';
	char a = 'A';
	char x;
	int i, j, n, k, l;    
	
	printf("Please enter a capital letter：\n");
	scanf("%c", &ch);
	
	n = ch - 64;   //A的ASCII码值为65，金字塔的层数 
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= n-i; j++)   //空格数，啊，我一开始想错了，我为什么要考虑输入完字母后的“空格”呢？？？ 
		{
			putchar(space);
		}
		
		a = 'A';   //放在循环外是为了使每次从A开始 
		for(k = 0; k <= i; k++)   //升序 ，这个简单，第i行有i个升序字母 
		{
			printf("%c", a);
			a++;
		}
		
		x = 64 + i;    //
		for(l=i; l > 0; l--)   //降序 
		{
			printf("%c", x);
			x--;
		}
		printf("\n");
	} 
	
	
	return 0;      //这道题目我想复杂了，其实也是一个从左向右输入的过程，我把右边的字符也考虑进来了...啊 
 }
