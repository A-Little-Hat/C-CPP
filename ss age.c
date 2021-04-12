#include"stdio.h"
#include"conio.h"
void main()
{
	int i,j,c=0;
	for(i=1;i<=10;i++)
	{
		printf("\n enter the age: ");
		scanf("%d",j);
		if(j>50&&j<60)
		c++;
	}
	printf("\n %d thank you.",c);
	getch();
}
