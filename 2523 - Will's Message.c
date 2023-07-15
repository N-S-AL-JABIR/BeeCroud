#include <stdio.h>
#include<string.h>
int main() {
	int p,i,k;
	char x[50];
	while (scanf("%s",x) !=EOF)
	{
		
		scanf("%d",&p);
		int n[p];
	
	for ( i = 0; i < p; i++)
	{
		scanf("%d",&k);
		printf("%c",x[k-1]);
	}
	printf("\n");
	}
	return 0;
}