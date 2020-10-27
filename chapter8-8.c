#include<stdio.h>

int checkinput();

int main (void)
{
	float fn, sn;
	char ch;
	int x = 1;
	printf("Enter the operation of your choice:\na.add                s.subtract\nm. multiply                d. divide\nq. quit\n");
	while(x)
	{
		ch = getchar();
		getchar();
		if(ch != 'a' && ch != 's' && ch != 'm' && ch !='d' && ch != 'q')
		{
			printf("Please input a, s, m, d or q");
			continue;
		}
		else if(ch == 'q')
		{
			return 0;
		}
		else
		{
			x = 0;
		}	
	}
	


	printf("Please Enter first number:");
	fn = checkinput();
	printf("Enter second number:");
	sn = checkinput();
	if(ch == 'd')
	{
		while(sn == 0)
		{
			printf("The secong number can't be 0,Please enter a new number:");
			sn = checkinput();
		}
	}
	
	    switch(ch)
    {
        case 'a':
            printf("%.2f + %.2f = %.2f", fn, sn, fn + sn);
            break;
        case 's':
            printf("%.2f - %.2f = %.2f", fn, sn, fn - sn);
            break;
        case 'm':
            printf("%.2f * %.2f = %.2f", fn, sn, fn * sn);
            break;
        case 'd':
            printf("%.2f / %.2f = %.2f", fn, sn, fn / sn);
            break;
        default:
            break;
    }
    
	
	return 0;
}

int checkinput()
{
	char mc;
    float n;
    while(scanf("%f", &n) != 1)
    {
        while((mc = getchar()) <= ' ')
        {
            putchar(mc);
        }
        while((mc = getchar()) > ' ')
            continue;
        printf(" is not a number\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
    }
    return n;
}
