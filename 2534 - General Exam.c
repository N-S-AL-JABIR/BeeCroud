#include <stdio.h>
int main() {
	int N,Q;
	while (scanf("%d%d",&N,&Q) !=EOF)
	{
		long long n[N],p[Q],i=0,j=0,k,l=0;
	for ( i = 0; i < N; i++)
	{
		scanf("%lld",&n[i]);
		
	}
	for ( i = 0; i < N; i++)
	{
		for ( k = i+1; k < N; k++)
		{
			if (n[i]<n[k])
			{
				l=n[i];n[i]=n[k];n[k]=l;	
			}
		}
	}
	for ( i = 0; i < Q; i++)
	{
		scanf("%lld",&p[i]);
	}
	for ( i = 0; i < Q; i++)
	{
		j=p[i];
		printf("%lld\n",n[j-1]);
	}
	}
	return 0;
}