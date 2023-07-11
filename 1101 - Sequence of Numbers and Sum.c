#include <stdio.h>
int main()
{
    int i,j,x,y,min;
    for (i = 1; i <= 100; i++) {
        scanf("%d %d",&x,&y);
    if (x<=0 || y<=0)
    {
        break;
    }
    else if (x>y)
        {
            min=x;x=y;y=min;
        }
    int sum=0;   
    for (j = x; j <= y; j++){
        sum+=j; 
    printf("%d ",j);
    }
     printf("Sum=%d\n",sum);
    }
    return 0;
}