#include<stdio.h>
int main (void)
{
	const int DUNBAR = 150;
	int w, t = 5;
	
	w = 1;
	while(t <= DUNBAR)
	{
		t = 2 * (t - w);
		printf("%d  %d\n",w, t);
		w++;
	}
	printf("%d  %d",w - 1, t);
	
	return 0;
} //一个没什么技术含量的程序，但为了庆祝chapter6的结束，我还是把它放上来了，✿✿ヽ(°▽°)ノ✿
