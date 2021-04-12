#include <stdio.h>
#include"stdio.h"
#include"conio.h"
int main()
{
    int r1,r2, c1,c2, a[100][100], b[100][100], sum[100][100], i, j;

    printf("Enter number of rows and columns for first matrix (between 1 and 100): ");
    scanf("%d%d", &r1,&c1);
    printf("Enter number of rows and columns for second matrix (between 1 and 100): ");
    scanf("%d%d", &r2,&c2);
    if(r1!=r2||c1!=c2)
    {
    	printf("\n wrong input...compatibility error...press any key to try again...");
    	getch();
    	system("cls");
    	main();
    	exit (0);
	}
	else
	{
    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            printf("Enter element b%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }

    // Adding Two matrices

    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    // Displaying the result
    printf("\nSum of two matrices: \n");

    for(i=0;i<r1;i++)
		{
        for(j=0;j<c1;j++)
		printf("%d   ",sum[i][j]);
        printf("\n");
        }
	}
    return (0);
	getch();
}
