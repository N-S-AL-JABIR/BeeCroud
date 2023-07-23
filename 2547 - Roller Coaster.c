#include <stdio.h>
int main() {
	int N,m,x;
	while (scanf("%d%d%d",&N,&m,&x) !=EOF)
	{
	int c=0,i,a;
	for ( i = 0; i < N; i++)
	{
		scanf("%d",&a);
		if (a>=m && a<=x)
		{
			c++;
		}
	}
	printf("%d\n",c);
		
	}
	return 0;
}