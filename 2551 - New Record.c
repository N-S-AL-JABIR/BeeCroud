#include <stdio.h>
int main()
{
	int N;
	while (scanf("%d",&N) !=EOF)
	{
	int i,a,b;
	float m[N],c;
	for ( i = 1; i <= N; ++i)
	{
		scanf("%d%d",&a,&b),m[i]=b/(a*1.0);
	}
	printf("1\n");
	c=m[1];
	for ( i = 2; i <= N; ++i)
	{
		if (m[i]>c)
		{
			c=m[i];
			printf("%d\n",i);
		}	
	}
	}
	return 0;
}