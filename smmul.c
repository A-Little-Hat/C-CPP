#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#define MAX 10
void main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],r1,r2,c1,c2,i,j,k,sum;
		printf("\n enter the row and column of first matrix : ");
		scanf("%d%d",&r1,&c1);
		printf("\n enter the row and column of second matrix : ");
		scanf("%d%d",&r2,&c2);
		if(c1!=r2)
		{	
    	printf("\n wrong input...compatibility error...press any key to try again...");
    	getch();
    	system("cls");
    	main();
    	exit (0);
    	}
    	else
    	{
		printf("\n enter value for first matrix.");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
			printf("\n enter value ");
			scanf("%d",&a[i][j]);
		}
		}
	system("cls");
		printf("\n enter value for second matrix.");
		for(i=0;i<r2;i++)
		{
		for(j=0;j<c2;j++)
		{
			printf("\n enter value ");
			scanf("%d",&b[i][j]);
		}
		}
	system("cls");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c2;j++)
			{
			c[i][j]=0;
			for(k=0;k<r2;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			
			}
		
		}
	system("cls");
	printf("\n first matrix : \n");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
		}
	printf("\n second matrix : \n");
		for(i=0;i<r2;i++)
		{
		for(j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
		}
		printf("\n multiplecation complete\n matrix is : \n");
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
		}
	
		}
}
