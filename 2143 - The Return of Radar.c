#include <stdio.h>
#define PI 3.14
int main () {
	int N,M,t=0,i;
	while (1)
	{
		scanf("%d",&N);
		if (N==0)
		{
			break;
		}
		for ( i = 0; i < N; i++)
		{
			scanf("%d",&M);
			if (M%2==0)
			{
				t=(M*2)-2;
			}
			else {
			t=(M*2)-1;
			}
			printf("%d\n",t);
		}
		t=0;
	}
	return 0;
}