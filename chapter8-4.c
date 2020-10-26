#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(void)
{
    FILE* in;
    in = fopen("123.txt", "r");
    char ch;
    int f = 0;
    double sum = 0.0, sn = 1.0, average;
    while((ch = getc(in)) != EOF)
    {
        if(isupper(ch) || islower(ch))
        {
            f = 1;
            sum++;
        }
        else if(f)
        {
            sn++;
            f = 0;
        }
    }
    average = sum / sn;
    printf("%.2lf\n", average);
    fclose(in);
    return 0;
}

