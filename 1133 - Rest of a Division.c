#include<stdio.h>
int main(){
    int i,a=0,x,y;
    scanf("%d%d",&x,&y);
    if (x>y){
        a=y;y=x;x=a;
    }
    for ( i = x+1; i < y; i++)
    {
        if (i%5==2 || i%5==3)
        {
        printf("%d\n",i);
        }
    }
    return 0;
}