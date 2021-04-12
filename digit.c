#include"stdio.h"
#include"math.h"

void main()
{
	int n,d,l,f,i;
	printf("\n enter the number");
	scanf("%d",&n);
	d=log10(n);
	i=pow(10,d);
	f=n/10;
	l=n%i;
	n=n-(f*i);
	n=n+(l*(i));
	i=n%10;
	n=n-i+f;
	printf("\n number is %d ",n);
	getch();
}
