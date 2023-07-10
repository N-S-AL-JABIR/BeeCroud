#include<stdio.h>
#include<math.h>
int main (){
    double A,B,C,m,x,y,z;
    scanf("%lf%lf%lf",&A,&B,&C);
    if (A<B)
    {
        m = A;A =B;B = m;
    }
   if (A<C)
    {
        m = A;A =C;C = m;
    }
    if (B<C)
    {
        m = B;B =C;C = m;
    }
    x=(A*A);
    y=(B*B);
    z=(C*C);
    if (A >= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
        if (x==y+z)
    {
      printf("TRIANGULO RETANGULO\n");
    }
    if (x>y+z)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (x<y+z)
    {
       printf("TRIANGULO ACUTANGULO\n");
    }
    if (A==B && B==C)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    
    else if (A==B || B==C || C==A)
    
      printf("TRIANGULO ISOSCELES\n");
    }

return 0;
}