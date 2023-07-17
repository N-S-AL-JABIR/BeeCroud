#include<stdio.h>
int main (){
    int M,N,C,n=0,c,i;
    double O=0;
    while (scanf("%d",&M) !=EOF)
    {
        n=0;
        c=0;
       for ( i = 0; i < M; i++)
       {
        scanf("%d %d",&N,&C);
        n+=(N*C);
        c+=C;
    }
    O=(n/(c*100.0f));
    printf("%.4lf\n",O);
   
    }
    return 0;
}