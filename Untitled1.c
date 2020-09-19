#include<stdio.h>
double power(double n, int p); //定义了一个power函数 
int main(void)
{
	double x, xpow;  
	int exp;
	
	printf("Enter a number and the positive integer power");  
	printf(" to which\nthe number will be raised.Enter q");  //咦 看懂了 其实主函数就是简单的while循环.....不要自己吓自己啊 高煜佳 
	printf("to quit.\n");
	while(scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x,exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of number or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}

double power(double n, int p)   //这个函数是求n的p次方，为什么是返回pow呢？ 
{
	double pow = 1;
	int i;
	
	for (i = 1; i <= p; i++)
	    pow *= n;
	    
	return pow;    //我以前遇到的定义函数，只包含计算式子，没涉及到求值的情况，这里的定义函数会求值，并且主函数需要用到这个值pow，所以返回pow，以使它被主函数调用。 
}   //让我仔细瞅瞅这个程序写了个啥 
