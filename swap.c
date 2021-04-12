#include"stdio.h"
#include"conio.h"
void swapvar(int *a,int *b);
void swap(int a,int b);
void main(void)
{
	int a,b;
	printf("\n enter two number : ");
	scanf("%d%d",&a,&b);
	printf("\n before swapping two numbers are:\n a=%d b=%d\n",a,b);
	swap(a,b);
	swapvar(&a,&b);
	getch();
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap without using third variable\na=%d b=%d\npress any key to continue",a,b);
	getch();
}
void swapvar(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n swap using third variable\na=%d b=%d\npress any key to continue",*a,*b);
	getch();
}
