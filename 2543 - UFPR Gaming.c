#include <stdio.h>
int main() {
	int N,I,i;
	while (scanf("%d%d",&N,&I) !=EOF)
	{
		int x,y,c=0;
		for ( i = 0; i < N; i++)
		{
			scanf("%d%d",&x,&y);
			if (x==I && y==0)
			{
				c++;
			}
			
		}
		printf("%d\n",c);	
	}
	return 0;
}