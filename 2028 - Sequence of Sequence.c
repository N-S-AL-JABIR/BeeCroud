#include <stdio.h>
int main () {
	int t,i,j,k,a=1,c=0,d;

	while (scanf("%d",&t)!=EOF)
	{
		c++;
		for ( k = 0; k <=t; k++)
		{
			a=a+k;
		}
		if (a==1)
		{
			printf("Caso %d: %d numero\n0",c,a);
		}
		else
		printf("Caso %d: %d numeros\n0",c,a);
		
	for ( i = 0; i <= t; i++)
	{
			for ( j = 0; j < i; j++)
			{
				printf(" %d",i);
			}	
	}
	printf("\n");
	printf("\n");
	a=1;
	}
	return 0;
}