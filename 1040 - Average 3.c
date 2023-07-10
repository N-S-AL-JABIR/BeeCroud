#include<stdio.h> 
#include<math.h>
int main(){
    float a,b,c,d,e;
    double ave1,ave2;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    ave1=((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n",ave1);
    if (ave1>=7.0)
    {
       printf("Aluno aprovado.\n");
    }
    else if (ave1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else{
    printf("Aluno em exame.\n");
    scanf("%f",&e);
    printf("Nota do exame: %.1f\n",e);
    ave2=((ave1+e)/2);
    if (ave2>=5.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (ave2<5.0)
    {
       printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",ave2);
     }
return 0;
}
