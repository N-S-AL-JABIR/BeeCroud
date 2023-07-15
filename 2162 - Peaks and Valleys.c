#include<stdio.h>
int main()
{
	int N,j,i,k=1;
	scanf("%d",&N);
	int A[N];
	for (i = 0; i < N; i++)
	{
		scanf("%d",&A[i]);
	}
	if (N==2 && A[0]==A[1])
	{
		k=0;
	}
	else {
	for ( i = 2; i < N; i++)
	{
		if (A[i]==A[i+1] || A[i]==A[i-1])
		{
			k=0;
			break;
		}
		if (A[i]>A[i-1] && A[i-2]>A[i-1] || A[i]<A[i-1] && A[i-2]<A[i-1])
		{
			k++;
		}
		else {
			k=0;
			break;
		}
		
	}
	}
	if (k>0)
	{
		printf("1\n");
	}
	else
	printf("0\n");
	
    return 0;
}