#include<stdio.h>
int main(void)
{
	int MIN, MAX, min, sum = 0;
	
	printf("Enter lower and upper integer limits:\n");
	while(scanf("%d %d", &MIN, &MAX) == 2 & MIN < MAX)
	{
		for(min = MIN;min <= MAX;min++)
		   sum += min * min;
		printf("the sum of the squares from %d to %d is %d\n", MIN*MIN, MAX*MAX, sum);
		printf("Enter next set of limits:\n");
	}
	printf("Done\n");

    return 0;
}   //¹êËÙ°¡£¬¶àÁ·Ï°¾ÍOK.... 
