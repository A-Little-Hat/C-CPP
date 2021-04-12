#include"stdio.h"
#include"math.h"

void main()
{
	int n,d,l,f,i;
	printf("\n enter the number");
	scanf("%d",&n);
	printf("%d",n);
	getch();
	d=log10(n);
	printf("%d",d);
	getch();
	i=pow(10,d);
	
	printf("%d",i);
	getch();
	f=n/10;
	
	printf("%d",f);
	getch();
	l=n%i;
	
	printf("%d",l);
	getch();
	n=n/10;
	
	printf("%d",n);
	getch();
	n=n-(f*i/10);
	
	printf("%d",n);
	getch();
	printf(" your number is %d%d%d",l,n,f);
	getch();
}
