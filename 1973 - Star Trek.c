#include <stdio.h>
int main()
{
    int N,i;
    scanf("%ld",&N);
    int sh[N],st[N];
    long long int tsh=0,tst=0;
    for ( i = 0; i < N; i++)
    {
        scanf("%lld",&sh[i]);
        st[i]=0;
    }
    i=0;
    while (1)
    {
       if (i==0 && sh[i]%2==0)
       {
        st[i]=1;
        if (sh[i]>0)
        {
            sh[i]--;
        }
        break;
       }
       else if (i==N-1 && sh[i]%2==1)
       {
        st[i]=1;
        sh[i]--;
        break;
       }
       else if (sh[i]%2==1)
       {
        st[i]=1;
        sh[i]--;
        i++;
       }
       else if (sh[i]%2==0)
       {
        st[i]=1;
        if (sh[i]>0)
        {
            sh[i]--;
        }
        i--;
       }   
    }
    for ( i = 0; i < N; i++)
    {
        tsh+=sh[i];
        tst+=st[i];
    }
    printf("%lld %lld\n",tst,tsh);
    
    return 0;
}