#include <stdio.h>
int main() {
	long double p;
	while (1)
	{
		scanf("%LF",&p);
		if (p<0)
		{
			break;
		}
		if (p==0)
		{
			printf("0\n");
		}
		else 
		printf("%.LF\n",--p);
	}
	
	return 0;
}