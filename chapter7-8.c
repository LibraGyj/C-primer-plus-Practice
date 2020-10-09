#include <stdio.h>
#define rate1 0.15;
#define rate2 0.2;
#define rate3 0.25;

int main(void)
{
	
	int hours, salary, tax, income, n;
	float m;
	
	help:printf("请输入1~5的数字。\n");
	
	scanf("%d", &n);
	switch (n)
	{
		case 1:
	        m = 8.75;
			break;
		case 2:
		    m = 9.33;
			break;
		case 3:
		    m = 10.00;
			break;
		case 4:
		    m = 11.20;
			break;
		default:
		    goto help;   //goto语句还挺好玩的 
		    break;
	}
	
	printf("请输入一周工作时间(# to quit)：\n");
	
	while(scanf("%d", &hours) == 1)
	{
		if(hours == '#')
		break;
		
		else if(hours <= 40)
		{
		    salary = m * hours;
		    if(salary <= 300)
		    {
		    	tax = salary * rate1;
		    }
		   
		    else
		    tax = m * 300 * rate1 + (salary - 300) * rate2;
		}

                else
               {
        	    salary = m * salary + (hours - 40) * 15;
	            if(salary <= 450)
	            {
	                tax = 45  + (salary - 300) * rate2;
	            }

                    else
		        tax = 75 + (salary - 450) * rate3;	
		}
        income = salary - tax;
        printf("工资总额为%d，税金为%d，净收入为%d。\n", salary, tax, income);
	}
	
	return 0;
}
