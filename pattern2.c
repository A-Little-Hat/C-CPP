#include"stdio.h"
void main()
{
	int i,j,n;
	printf("\n enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf("%d",i);
		printf("\n");
	}
}
