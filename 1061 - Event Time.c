#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;
    int dif,x,y,q,s;
    scanf("Dia %d",&a);
    scanf("%d : %d : %d\n", &b, &c, &d);
    scanf("Dia %d",&e);
    scanf("%d : %d : %d", &f, &g, &h);
    dif = ((e*86400)+(f*3600)+(g*60)+h) - ((a*86400)+(b*3600)+(c*60)+d);
    x=dif;
    y=(x % 86400);
    q=(y % 3600);
    s=q % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", x/86400, y/3600, q/60, s);
    return 0;
}