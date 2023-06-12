#include <stdio.h>

int main() {
    int i,r,n,j,c,a,b=1,k=1;
    while (1)
    {
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }
        else
        {
                
            for ( i = 0; i < n; i++)
                {b=1;
                    for ( j = 0; j < n; j++)
                    {
                        if (i==0)
                        {
                           if (j==0)
                        printf("%3d",k++);
                        else
                        printf(" %3d",k++);
                            
                            
                        }
                        else if(i>0){

                        k--;
                        if (k>0)
                        {
                            if (j==0)
                        printf("%3d",k);
                        else
                        printf(" %3d",k);
                        }
                        

                        if (k<1)
                        {
                           b++;
                           if (j==0)
                        printf("%3d",b);
                        else
                        printf(" %3d",b);
                        }
                        
                        }
                    }
                    k=i+3;
                    printf("\n");
                }
                printf("\n");
        }
        k=1;
    }

    return 0;
}
