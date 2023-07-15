#include<stdio.h>
int main(){
    int a[3],i,j,m=0;
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = i+1; j < 3; j++)
        {
            if (a[i]<a[j])
            {
                m=a[j];a[j]=a[i];a[i]=m;
            }
            
        }
        
    }
    if (a[0]>=(a[1]+a[2]))
    {
        printf("Invalido\n");
    }
    else if (a[0]==a[1] && a[1]==a[2])
    {
        printf("Valido-Equilatero\nRetangulo: N\n");
    }
    else if (a[1]==a[2] || a[1]==a[0] || a[0]==a[2])
    {
        printf("Valido-Isoceles\nRetangulo: N\n");
    }
    else if ((a[0]*a[0])==((a[1]*a[1])+(a[2]*a[2])))
    {
    printf("Valido-Escaleno\nRetangulo: S\n");
    }
    else
    printf("Valido-Escaleno\nRetangulo: N\n");

    return 0;
}