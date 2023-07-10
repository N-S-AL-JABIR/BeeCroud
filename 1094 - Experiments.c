#include<stdio.h>
int main(){
    int i,x,y,z,sum=0,sum1=0,sum2=0,sum3=0;
    char a;
    double m,n,o;
    scanf("%d",&x);
    for (i = 0; i < x; i++)
    {
        scanf("%d %c",&y,&a);
    
    if (a=='C')
    {
    sum1=sum1+y;
    }
    if (a=='R')
    {
    sum2=sum2+y;
    
    }
    if (a=='S')
    {
    sum3=sum3+y;
    
    }
    }
    sum=sum1+sum2+sum3;
    m=(sum1/(sum*1.0))*100.0;
    n=(sum2/(sum*1.0))*100.0;
    o=(sum3/(sum*1.0))*100.0;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2lf %%\n",m);
    printf("Percentual de ratos: %.2lf %%\n",n);
    printf("Percentual de sapos: %.2lf %%\n",o);

    return 0;
}