#include <stdio.h>
int main ()
{
	int i,j,n,d[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    char *r[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	scanf("%d", &n);
    for ( i = 0; i < 1000; i++)
    {
        j=n/d[i];
        if (n==0)
        {
           break;
        }
        
        if (j>0)
        {
        printf("%s",r[i]);
        n-=d[i];
        i=0;
        }
    }
	printf("\n");
    return 0;
}