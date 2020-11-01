#include <stdio.h>

void interchange (double *m, double *n, double *t);

int main(void)
{
	double x, y, z;
	printf("请输入3个数字x、y、z：\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	interchange (&x, &y, &z);
	printf("按大小顺序排列3个数字为%lf,%lf和%lf：\n", x, y, z);
	
	return 0;
}

void interchange (double *m, double *n, double *t)
{
	double temp;
	if (*m > *n)
	{
		if (*t > *m)
	    {
	        temp = *m;
		    *m = *n;
		    *n = temp;
		}
		if (*t < *n)
		{
			temp = *m;
		    *m = *t;
		    *t = temp;
		}
		if (*t < *m && *t > *n)
		{
		    temp = *m;
		    *m = *n;
		    *n = temp;
		    temp = *m;
		    *m = *t;
		    *t = temp;
		}
	}
    if (*m < *n)
	{
		if (*t < *m)
	    {
	        temp = *t;
		    *t = *n;
		    *n = temp;
            temp = *m;
		    *m = *n;
		    *n = temp;
		}
		if (*t > *m && *t < *n)
		{
		    temp = *t;
		    *t = *n;
		    *n = temp;
		}
	}
}
