#include"stdio.h"

void main()
{
	FILE *fp;
	char c;
	char a[100];
	int i,n, d, swap;
	
	fp=fopen("bubble.txt","w");
	printf("enter numbers \n");
	while((c=getchar())!=EOF)
	{
		if(c=='1')
		break;
		fputc(c,fp);
	}
	
	fclose(fp);
	
	fp=fopen("bubble.txt","r");
	
	i=0;
	while((c=fgetc(fp))!=EOF)
	{
		a[i]=c;
		i++;
	}
	
	fclose(fp);
	
	n=i;
	
	for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1]) 
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
  printf("\nsort completed.....\n");
  getch();
  
  fp=fopen("bubble.txt","w");
  
  i=0;
  while(i<=n&&(c=a[i])!=EOF)
  	{
  		fputc(c,fp)	;
  		i++;
	}
	
	fclose(fp);
	system("cls");
	
	printf("sorted data is :\n");
	fp=fopen("bubble.txt","r");
	
	while((c=fgetc(fp))!=EOF)
  	printf("%c ",c);
  	
  	getch();
}
