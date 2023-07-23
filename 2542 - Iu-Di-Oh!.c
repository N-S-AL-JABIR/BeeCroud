#include <stdio.h>
int main() {
	int N;
	while (scanf("%d",&N) !=EOF)
	{
		int i,j,m,l,cm,cl,a,c,M[100][100],L[100][100];
		scanf("%d%d",&m,&l);
			
		for ( i = 0; i < m; i++)
		{
			for ( j = 0; j < N ; j++)
			{
				scanf("%d",&M[i][j]);
			}
			
		}
		for ( i = 0; i < l; i++)
		{
			for ( j = 0; j < N ; j++)
			{
				scanf("%d",&L[i][j]);
			}
			
		}
		scanf("%d%d",&cm,&cl);
		scanf("%d",&a);
		if (M[cm-1][a-1] > L[cl-1][a-1])
		{
			printf("Marcos\n");
		}
		else if (L[cl-1][a-1] > M[cm-1][a-1])
		{
			printf("Leonardo\n");
		}
		else
		printf("Empate\n");
			
	}
	return 0;
}