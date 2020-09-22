#include<stdio.h>
int main (void)
{
	const int DUNBAR = 150;
	int w, t = 5;
	
	w = 1;
	while(t <= 150)
	{
		t = 2 * (t - w);
		printf("%d  %d\n",w, t);
		w++;
	}
	printf("%d  %d",w - 1, t);
	
	return 0;
}
