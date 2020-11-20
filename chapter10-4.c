#include <stdio.h>
double max(double test[], int n)
{
	double i = test[0];
	int m;
	int mn;
	
	for (m = 1; m < n; m++)
	{
	    if(i < test[m])
	    {
		   i = test[m];
		   mn = m; 	    	
		}	
	}
   
   	printf("%d", mn);
   
    return i;
}

int main(void)
{
	double ac[5] = {2.1, 4.1, 10.1, 8.1, 3.1};
	
	max(ac, 5);
	
	return 0;
}
