#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
void main()
{
  FILE *f1,*f2;
  char c;
  f1=fopen("file.txt","w");
  while((c=getchar())!=EOF)
  	{
  	if(c=='1')
  	break;
  	putc(c,f1);
	}
  fclose(f1);
  f1=fopen("file.txt","r");
  f2=fopen("copy.txt","w");
  while((c=getc(f1))!=EOF)
  putc(c,f2);
  fclose(f2);
  f2=fopen("copy.txt","r");
  while((c=getc(f2))!=EOF)
  printf("%c",c);
  fclose(f1);
  fclose(f2);
  getch();
}
