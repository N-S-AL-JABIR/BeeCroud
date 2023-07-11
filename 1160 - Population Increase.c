#include<stdio.h>
int main()
{
	int T,i,PA,PB,m,n,o=0;
	float G1,G2;
	scanf("%d",&T);
	for (i = 1; i <= T; i++)
	{
	scanf("%d %d %f %f",&PA,&PB,&G1,&G2);
	while (m<=n)
	{
		m=PA+(PA*(G1/100));
		n=PB+(PB*(G2/100));
		PA=m;
		PB=n;
		o++;
		if (o>100)
		{
			break;
		}
	}
	if (o>100)
	{
		printf("Mais de 1 seculo.\n");
	}
	else{
	printf("%d anos.\n",o);
	}
	m=0;
	n=0;
	o=0;
	}
    return 0;
}