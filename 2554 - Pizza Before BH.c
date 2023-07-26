#include <stdio.h>
int main()
{
	int N,D;
	while (scanf("%d%d",&N,&D) !=EOF)
	{
	int i,j,a,b=0,c=0,d,m,y,p,q,r;
	for ( i = 0; i < D; i++)
	{
		scanf("%d/%d/%d",&d,&m,&y);
		for (j = 0; j < N; j++)
		{
			scanf("%d",&a);
			if (a==1)
			{
				c++;
			}
		}
		if (c==N)
		{
		b++;
		}
		if (b==1 && c==N)
		{
			p=d;
			q=m;
			r=y;
		}
		c=0;
	}
	if (b==0)
	{
		printf("Pizza antes de FdI\n");
	}
	else
	printf("%d/%d/%d\n",p,q,r);
	}
	return 0;
}