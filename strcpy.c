#include"stdio.h"
#define MAX 100
void main()
{
	char a[MAX],b[MAX],i=0;
	printf("\n enter the string : ");
	gets(a);
	for(;a[i]!='\0';i++)
	b[i]=a[i];
	printf("\n new string is : ");
	puts(a);
	getch();
}
