#include<stdio.h>
int main(){
    int i,N,T,j,k;
    scanf("%d",&N);
    int X[N];
    for (i = 0; i < N; i++)
        scanf("%d",&X[i]);
    j=X[0];
    for (i = 1; i< N; i++)
    {
    if (j>X[i])
    {
        j=X[i];
        k=i;
    }
    }
    printf("Menor valor: %d\nPosicao: %d\n",j,k);
return 0;
}