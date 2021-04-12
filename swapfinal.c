#include"stdio.h"
#include"conio.h"
void swapvari(int *a,int *b);
void swapi(int a,int b);
void swapvarf(float *a,float *b);
void swapf(float a,float b);
void swapvarc(char *a,char *b);
void swapc(char a,char b);
int main(void)
{	
	int a,b,c;
	float d,e;
	char f,g;
	do
	{
	printf("\n value swap\n1 integer\n2 float\n3character\n choose your choice :");
	scanf("%d",&c);
	switch (c)
	{
	case 1:
		{
	printf("\n enter two number : ");
	scanf("%d%d",&a,&b);
	printf("\n before swapping two numbers are:\n a=%d b=%d\n",a,b);
	swapi(a,b);
	swapvari(&a,&b);
	break;
	}
	case 2:
		{
	printf("\n enter two number : ");
	scanf("%f%f",&d,&e);
	printf("\n before swapping two numbers are:\n a=%f b=%f\n",d,e);
	swapf(d,e);
	swapvarf(&d,&e);
	break;
		}
	case 3:
		{
	printf("\n enter two number : ");
	scanf("%c%c",&f,&g);
	printf("\n before swapping two numbers are:\n a=%c b=%c\n",f,g);
	swapc(f,g);
	swapvarc(&f,&g);
	break;
		}
	default:
		{
		printf("\n wrong choice try again");
		main();
		exit(0);
		}
}

	printf("\n press 0 to exit...press any key to continue...");
	scanf("%d",&c);
    }while(c!=0);
    return (0);
	getch();
}
void swapi(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap without using third variable\na=%d b=%d\npress any key to continue\n",a,b);
	getch();
}
void swapvari(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n swap using third variable\na=%d b=%d\npress any key to continue",*a,*b);
	getch();
}

void swapf(float a,float b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap without using third variable\na=%f b=%f\npress any key to continue",a,b);
	getch();
}
void swapvarf(float *a,float *b)
{
	float temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n swap using third variable\na=%f b=%f\npress any key to continue",*a,*b);
	getch();
}

void swapc(char a,char b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap without using third variable\n%c  %c\npress any key to continue",a,b);
	getch();
}
void swapvarc(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n swap using third variable\n%c %c\npress any key to continue",*a,*b);
	getch();
}
