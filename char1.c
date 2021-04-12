#include"stdio.h"
void main()
{
	char a[10];
	int i=0;
	while(scanf("%[^\n]c",&a[i])!='\0')
	i++;
	puts(a);
	getch();
}
