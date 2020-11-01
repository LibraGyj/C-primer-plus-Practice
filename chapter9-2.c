#include <stdio.h>
 
void chline (char ch, int i, int j);
 
int main (void)
{
    int i, j;
    char ch;
 
    printf ("Enter a word:\n");
    scanf ("%c", &ch);
    setbuf(stdin,NULL);
    printf ("Enter the number of column and line:\n");
    scanf ("%d %d", &i, &j);
 
    chline (ch, i, j);
 
    return 0;
}
 
 
void chline (char ch, int i, int j)
{
    int a, b;
 
    for (a = 0; a < j; a++)
    {
        for (b = 0; b < i; b++)
            printf ("%c", ch);
        printf ("\n");
    }
}

