#include <stdio.h>
#include <float.h>

double maxdmin(double test[], int n)
{
	double num1 = 0;
	double num2 = DBL_MAX;

    while(n--)  //判断语句，能减就一直减 
	{
		num1 = num1 > test[n] ? num1 : test[n]; //得到max 
		num2 = num2 > test[n] ? test[n] : num2; //得到min 
	}
	
	return num1 - num2;	
}
int main(void)
{
	int n;
	int i;
	double ac[n];
	
	printf("please input n:");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &ac[i]);	
	}
	
	printf("%lf \n", maxdmin(ac, n));
	
	return 0;
}


