#include<stdio.h>
int main(){
    int a,b[4],d,i,j,m,n,o,p;
    for ( i = 0; i < 4; i++)
    {   
    scanf("%d",&b[i]);
    }
    for (i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
        if (b[i]>b[j])
        {
            d=b[i];
            b[i]=b[j];
            b[j]=d;
        } 
      }   
    }
    m=b[1]+b[2];
    n=b[2]+b[3];
    o=b[1]+b[3];
    if (m>b[0] || n>b[0] || n>b[0] || n>b[1] )
    {
        printf("S\n");
    }
    else 
    printf("N\n");
    return 0;
}