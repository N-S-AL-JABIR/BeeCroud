#include <stdio.h>
#include<string.h>
int main() {
	int p,i,n,v;
	char x[20];
	while (1)
	{
	scanf("%d",&p);
	if (p==0)
	{
		break;
	}
	for ( i = 0; i < p; i++)
	{
		scanf("%d %[^\n]s",&n,x);
		if (x[0]=='s')
		{
			v+=(n*120);
		}
		else if (x[0]=='m' && x[1]=='o')
		{
			v+=(n*85);
		}
		else if (x[0]=='m' && x[2]=='m')
		{
			v+=(n*85);
		}
		else if (x[0]=='g' && x[1]=='o')
		{
			v+=(n*70);
		}
		else if (x[0]=='m' && x[2]=='n')
		{
			v+=(n*56);
		}
		else if (x[0]=='l' && x[1]=='a')
		{
			v+=(n*50);
		}
		else if (x[0]=='b' && x[1]=='r')
		{
			v+=(n*34);
		}
	}
	if (v>130)
	{
		printf("Menos %d mg\n",(v-130));
	}
	else if (v<110)
	{
		printf("Mais %d mg\n",(110-v));
	}
	else
	printf("%d mg\n",v);
	v=0;
	}
	return 0;
}