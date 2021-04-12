#include"stdio.h"
#define MAX 100
void main()
{
	char a[MAX],b[MAX],i,j;
	printf("\n enter the string : ");
	gets(a);
	i=0;
	while(a[i]!='\0')
	i++;
	printf("\n enter the second string : ");
	gets(b);
	j=0;
	while(a[j]!='\0')
	j++;
	if(i!=j)
	{
		printf("\n mismatch...");
		getch();
		exit(0);
	}
	else
	{
		for(i=0;i<j;i++)
		{
			if(a[i]!=b[i])
			{
				printf("\n mismatch...");
				getch();
				exit(0);
			}
		}
		printf("\n match...");
		getch();
	}
}
