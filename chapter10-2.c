#include <stdio.h>
int max(int test[], int n)
{
	int i = test[0];
	int m;
	
	for (m = 1; m < n; m++)
	{
	    if(i < test[m])
		   i = test[m]; 		
	}
   
   	printf("%d", i);
   
    return i;
}

int main(void)
{
	int ac[5] = {2, 4, 1, 8, 3};
	
	max(ac, 5);
	
	return 0;
}
