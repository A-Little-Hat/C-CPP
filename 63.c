#include"stdio.h"
#include"math.h"
#include"string.h"

int sum(int n)
{
	int k,s=0;
	while(n>0)
	{
		k=n%10;
		s+=k;
		n=n/10;
	}
	return(s);
}
void main()
{
	int n,s;
	printf("\n enter a number");
	scanf("%d",&n);
	s=sum(n);
	printf("\n sum = %d",s);
	getch();
}
