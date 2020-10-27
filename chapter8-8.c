#include<stdio.h>   //存一个档 第八章几乎是一大半都是复制别人的 不知怎的 做这一章时 脑子一点儿都不想动 甚至类似的以前会写的现在也一行都写不出来 我现在感觉自己的大脑皮层以及呼吸系统都处于强迫症状态
     
int checkinput();   //必须浅呼吸两下 再深呼吸一下 不然就很别扭难受 这已经很影响我思考了 但我控制不住不去这么呼吸 我先暂时和第八章说再见了 再下去 我可能会和呼吸杠上了

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
