#include<stdio.h>
int main()
{
	int x,y,M=0,N=0,j,i;
	scanf("%d %d",&x,&y);
	int A[x][y];
	for (i = 0; i < x; i++)
	{
		for ( j = 0; j < y ; j++)
		{
			scanf("%d",&A[i][j]);
		}	
	}for (i = 0; i < x; i++)
	{
		for ( j = 0; j < y ; j++)
		{
			if (A[i][j]==42 && A[i][j+1]==7 && A[i][j-1]==7 && A[i+1][j]==7 && A[i-1][j]==7 && A[i+1][j+1]==7 && A[i+1][j-1]==7 && A[i-1][j+1]==7 && A[i-1][j-1]==7   )
			{
				M=i+1;
				N=j+1;
			}
		}	
	}
	printf("%d %d\n",M,N);
    return 0;
}