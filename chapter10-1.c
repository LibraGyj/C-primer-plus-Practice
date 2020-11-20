#include <stdio.h>

void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source, double *source2);
void show(double anything[], int n);

int main (void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	
	show(source, 5);
	
	copy_arr(target1, source, 5);
	show(target1, 5);
        copy_ptr(target2, source, 5);
        show(target2, 5);
        copy_ptrs(target3, source, source + 5);
        show(target3, 5);
    
        return 0;
}

void copy_arr(double target[],double source[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	    target[i] = source[i];
}

void copy_ptr(double *target,double *source, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	    *(target + i) = *(source + i);
}

void copy_ptrs(double *target, double *source, double *source2)
{
	int i;
	
	for(i = 0; source + i < source2; i++)
	   *(target + i) = *(source + i);
}

void show(double anything[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	    printf("%.1lf   ", anything[i]);
	
	printf("\n"); 
}

