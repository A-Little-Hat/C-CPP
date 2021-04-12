#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

struct student
{
	int roll;
	char name[50];
};
typedef struct student S;

void main()
{
  FILE *fp;
  S s;
  char c;
  int n,i;
  
  fp=fopen("struct.txt","w");
  if(fp==NULL)
  {
  	printf("\n unable to create file file");
  	exit(0);
  }
  
  printf("\n enter the number of records to be inserted");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter student details\n");
	printf("Roll No:");
	scanf("%d",&s.roll );
	printf("\nName:");
	scanf("%s",&s.name);

	fwrite(&s,sizeof(s),1,fp); 
	system("cls");

  }
  fclose(fp);
  
  fp=fopen("struct.txt","r");
  i=0;
  while(i<n)
  {
  	fread(&s,sizeof(s),1,fp);
  	printf("%d ",s.roll);
	puts(s.name);
	i++;
  }
  fclose(fp);
getch();
}
