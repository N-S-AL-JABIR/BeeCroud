#include<stdio.h>
#include<string.h>
int main()
{
	int x,i,n;
	char A[505];
	gets(A);
	n=strlen(A);
	
	if (n>140)
	{
		printf("MUTE\n");
	}
	else
	printf("TWEET\n");
    return 0;
}