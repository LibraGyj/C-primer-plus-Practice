#include <stdio.h>
#include <math.h>
int main(void)
{
	int click, limit; 
	float n,sum, sum_;
	double pow(double x,double y);
	
	printf("Enter the number of terms you want: ");
	while(scanf("%d", &limit) == 1)
	{
		for(n = 1, sum = 0, sum_ = 0; n <= limit; n++)
     	{
     		sum += (float)1 / n;
		    sum_ += pow( -1,n+1) * (float)(1 / n);
	    }
	printf("相加的结果是：%.5f 交错相加的结果是：%.5f\n", sum, sum_);	
	printf("Enter again:");
	}
	printf("Done!\n");

	return 0;
}
