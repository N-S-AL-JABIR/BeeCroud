#include <stdio.h>
int main() {
	long long int N;
	while (scanf("%lld",&N) !=EOF)
	{
		int i,j=1,c=0;
		for ( i = 0; i < 100; i++)
		{
			j*=2;
			if (j>N)
			{
				break;
			}
			c++;
			
		}
		
		printf("%d\n",c);
		
	}
	return 0;
}