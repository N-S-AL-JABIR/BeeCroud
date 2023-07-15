#include <stdio.h>
#include <math.h>
int main() {
	double a=0;
	int i,b;
	scanf("%d",&b);
	a=b/(log(b));
	printf("%.1lf %.1lf\n",a,(1.25506*a));
	return 0;
}