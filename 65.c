#include"stdio.h"
#include"math.h"
#include"string.h"

void main()
{
	char a[100],b[100],c[100];
	int x,y,z;
	printf("\n enter the first ");
	gets(a);
	printf("\n enter the second");
	gets(b);
	printf("\n enter the third");
	gets(c);
	x=strlen(a);
	y=strlen(b);
	z=strlen(c);
	if(x<y)
	{
		if(z<y)
		puts(b);
		else
		puts(c);
	}
	else
	puts(a);
	getch();
}
