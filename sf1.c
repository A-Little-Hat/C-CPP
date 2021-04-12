#include"stdio.h"
void main()
{	
	char c;
	FILE *fp;
	fp=fopen("SOUMYANEEL","r");
	while((c=getc(fp))!=EOF)
	printf("%c",c);
}
