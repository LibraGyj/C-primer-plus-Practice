#include <stdio.h>

void interchange (double *m, double *n, double *t);

int main(void)
{
	double x, y, z;
	printf("������3������x��y��z��\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	interchange (&x, &y, &z);
	printf("����С˳������3������Ϊ%lf,%lf��%lf��\n", x, y, z);
	
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
