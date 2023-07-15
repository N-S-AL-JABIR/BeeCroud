#include <stdio.h>
#include <string.h>
int main() {
	int a;
	char A[502];
	gets(A);
	a=strlen(A);
	printf((a>80)?"NO\n":"YES\n");
	return 0;
}