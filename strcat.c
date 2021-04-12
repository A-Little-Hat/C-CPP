#include"stdio.h"
#define MAX 100
void main()
{
	char a[MAX],b[MAX],i=0,j;
	printf("\n enter the string : ");
	gets(a);
	printf("\n enter the second string : ");
	gets(b);
	for(i=0;a[i]!='\0';i++);
	{
		for(j=0;b[j]!='\0';j++)
		{
			a[i++]=b[j];
		}
	}
	printf("\n contatination done....\n\n new string is : ");
	puts(a);
	getch();
}
