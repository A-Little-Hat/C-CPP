#include"stdio.h"
#include"math.h"
#include"string.h"

void main()
{
	char s[100];
	int i,n,k;
	printf("\n please enter the string  ");
	gets(s);
	n=strlen(s);
	printf("\n enter the value of k...");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		s[i]=(char)(((int)s[i]+k)%26);
	}
	printf("\n new string is: \n");
	puts(s);
	getch();
}
