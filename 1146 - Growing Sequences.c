#include<stdio.h>
int main(){
    int i,j,x;
    while (1)
    {
        scanf("%d",&x);
        if (x==0)break;
    for ( i = 1; i <x; i++)
    {
        printf("%d ",i);
        }
        printf("%d\n",x);   
    }
    return 0;
}