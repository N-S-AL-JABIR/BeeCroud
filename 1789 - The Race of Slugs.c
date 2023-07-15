#include<stdio.h>
int main(){
    int N,V;
    while (scanf("%d",&N) !=EOF)
    {
        int i,max=1;
       for ( i = 0; i < N; i++)
       {
        scanf("%d",&V);
        if (V<0)
        {
            break;
        }
        else
        if (V>max)
        {
            max=V;
        }
       }
       if (max>=20)
       {
        printf("3\n");
       }
       else if (max>=10 && max<20)
       {
        printf("2\n");
       }
       else if (max<10)
       {
        printf("1\n");
       }
       
    }

    return 0;
}