#include <stdio.h>
#define rate1 2.05;
#define rate2 1.15;
#define rate3 1.09;

int main (void)
{
	char ch;
	float n1, n2, n3, n, m1, m2, m3, sum, trans, discount;
	
	helpo:
	printf("��������Ӧ��ĸ���з���ѡ��\n");
	printf("a:����  b:���  c:���ܲ�  q���˳� \n");
	
	scanf("\n %c", &ch);
    	switch(ch)
        {
		    case 'a':
			    printf("����������İ�����\n");
		    	scanf("%f", &n1);
			    n += n1;
		    	m1 = n1 * rate1;
			    break;
	    	case 'b':
		        printf("��������˵İ�����\n");
		        scanf("%f", &n2);
		        n += n2;
			    m2 = n2 * rate2;
			    break;
		    case 'c':
		        printf("��������ܲ��İ�����\n");
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
		printf("�ۿ�Ϊ��%.2f��\n", discount); 
	}

	printf("�����ۼ�Ϊ2.05Ԫ/������������Ϊ%.2f�����۸�Ϊ%.2fԪ��\n", n1, m1);
	printf("����ۼ�Ϊ1.15Ԫ/������������Ϊ%.2f�����۸�Ϊ%.2fԪ��\n", n2, m2);
	printf("�����ۼ�Ϊ2.05Ԫ/������������Ϊ%.2f�����۸�Ϊ%.2fԪ��\n", n3, m3);
	printf("�����ܼ�Ϊ%.2fԪ��\n", sum);
	printf("�˷ѺͰ�װ��Ϊ%.2fԪ��\n", trans);
	printf("�ܹ�����Ϊ%.2fԪ��\n", sum + trans - discount); 
	
	return 0;
}  //�����½����ˣ���ʼ�µ�ѧϰ��Ŀǰ�Ҹо�������ص������˼ά�����Է�����֮��  good nighe~
