#include"stdio.h"
#include"stdlib.h"
int main()
{
	FILE *f1;
	char c;
	printf("\n\n data input");
	f1=fopen("input","w");
	if(f1==NULL)
	{ 
	 printf("\n file can't be created.......");
	 exit(0);
	}
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
	printf("\n data output");
	f1=fopen("INPUT","r");
	while((c=getc(f1))!=EOF)
	printf("%c",c);
	fclose(f1);
}
