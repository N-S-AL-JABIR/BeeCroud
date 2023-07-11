#include<stdio.h>
int main(){
    long long int i,j,X,f=0,s=1,n;
    int T,N;
    scanf("%d",&N);
    for (j = 0; j < N; j++)
    {
    scanf("%d",&T);
    for(i = 0; i <= T; i++){
        if (i <= 1) n = i;
          else
          {
        n=f+s;
        f=s;
        s=n;}
        
    }
        printf("Fib(%d) = %lld\n",T,n);
        f=0;
        s=1;
    }
    return 0;
}