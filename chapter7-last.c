#include <stdio.h>
#define rate1 2.05;
#define rate2 1.15;
#define rate3 1.09;

int main (void)
{
	char ch;
	float n1, n2, n3, n, m1, m2, m3, sum, trans, discount;
	
	helpo:
	printf("请输入相应字母进行服务选择：\n");
	printf("a:洋芋  b:甜菜  c:胡萝卜  q：退出 \n");
	
	scanf("\n %c", &ch);
    	switch(ch)
        {
		    case 'a':
			    printf("请输入洋芋的磅数：\n");
		    	scanf("%f", &n1);
			    n += n1;
		    	m1 = n1 * rate1;
			    break;
	    	case 'b':
		        printf("请输入甜菜的磅数：\n");
		        scanf("%f", &n2);
		        n += n2;
			    m2 = n2 * rate2;
			    break;
		    case 'c':
		        printf("请输入胡萝卜的磅数：\n");
		        scanf("%f", &n3);
		        n += n3;
		    	m3 = n3 * rate3;
			    break; 
			case 'q':
				goto help;
				break;
	    }
	    goto helpo;
		
	help:n = n1 + n2 + n3;
	if (n <= 5)
	trans = 6.5;
	else if (n <= 20)
	trans = 14;
	else
	trans = 14 + 0.5 * (n - 20);
	
	sum = m1 + m2 + m3;
	if(sum >= 100)
	{
		discount = 0.05 * sum;
		printf("折扣为：%.2f；\n", discount); 
	}

	printf("洋芋售价为2.05元/磅，购买数量为%.2f磅，价格为%.2f元；\n", n1, m1);
	printf("甜菜售价为1.15元/磅，购买数量为%.2f磅，价格为%.2f元；\n", n2, m2);
	printf("洋芋售价为2.05元/磅，购买数量为%.2f磅，价格为%.2f元；\n", n3, m3);
	printf("货物总价为%.2f元；\n", sum);
	printf("运费和包装费为%.2f元；\n", trans);
	printf("总共费用为%.2f元。\n", sum + trans - discount); 
	
	return 0;
}  //第七章结束了，开始新的学习，目前我感觉变成最重的是你的思维，语言反而次之了  good nighe~
