#include"stdio.h"
int fact(int f);
void main()
{
	int n,f;
	printf("\n enter the value of n");
	scanf("%d",&n);
	switch (n)
	{
		case 0:
			{
				printf(" result = 1");
				exit(0);
			}
		case 1:
			{
				printf(" result = 1");
				exit(0);
			}	
	}
	f=fact(n);
	printf("%d ",f);
	getch();
}

int fact(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++)
		f=f*i;
	return (f);
}
