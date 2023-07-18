#include <stdio.h>
int main() {
	int N;
	while (scanf("%d",&N) !=EOF)
	{
		int n,i,c=0;
		double l=0,d;
	for ( i = 0; i < N; i++)
	{
		scanf("%d",&n);
		if (n==1)
		{
		c+=n;
		}
		
	}
	d=N;
	l=c/d;
	if (l>.66666666666)
	{
		printf("impeachment\n");
	}
	else 
	printf("acusacao arquivada\n");
	}
	return 0;
}