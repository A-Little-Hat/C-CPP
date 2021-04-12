#include"stdio.h"
#include"conio.h"
void main()
{
	int i,j;
	for(i=5;i>=0;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(j<5-i)
			printf(" ");
			else
			printf("*");
			
		}
		printf("\n");
	}
	printf("\n thank you.");
	getch();
}
