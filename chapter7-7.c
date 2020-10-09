#include <stdio.h>
#define rate1 0.15;
#define rate2 0.2;
#define rate3 0.25;

int main(void)
{
	int hours, salary, tax, income;
	
	printf("������һ�ܹ���ʱ��(# to quit)��\n");
	
	while(scanf("%d", &hours) == 1)
	{
		if(hours == '#')
		break;
		
		else if(hours <= 40)
		{
			salary = 10 * hours;
		    if(salary <= 300)
		    {
		    	tax = salary * rate1;
			}
		   
		    else
		    tax = 45 + (salary - 300) * rate2;
		}

        else
        {
        	salary = 400 + (hours - 40) * 15;
	        if(salary <= 450)
	        {
	        	tax = 45 + (salary - 300) * rate2;
			}

            else
		    tax = 75 + (salary - 450) * rate3;	
		}
        income = salary - tax;
        printf("�����ܶ�Ϊ%d��˰��Ϊ%d��������Ϊ%d��\n", salary, tax, income);
	}
	
	return 0;
}
