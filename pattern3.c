#include<stdio.h>
int main()
{
	char c[100];
	int i;
	printf("enter sentence :\n");
	i=0;
	while(scanf("%[^\n]c",&c[i])!='\0')
	i++;
	printf("entered sentence\n");
	i=0;
	while(c[i]!='\0')
	{
			printf("%c",c[i]);
			i++;
	}
	
}
