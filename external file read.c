#include"stdio.h"

void main()
{
	FILE *fp,*f;
	char c;
	int i=0;
	  fp=fopen("sy.txt","rb");
	while((c=fgetc(fp))!=EOF)
	{
	 	printf("%c",c);
	 	i++;
	}
	
		printf("%d",i);
	getch();
}
