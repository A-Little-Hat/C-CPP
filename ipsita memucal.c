#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float c;
int a,b,n,m ;
printf("****calculator****\n");
printf("enter your choice\n");
printf("1)Addition\n 2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\n");
scanf("%d",&n);
switch (m)
{
case 1:
{
printf("enter two num:");
scanf("%d%d",&a,&b);
c=a+b;
printf("the result is :%f",c);
}
case 2:
{
 
printf("enter two num:");
scanf("%d%d",&a,&b);
c=a-b;
printf("the result is :%f",c);
break;
}
case 3:
{
printf("enter two num:");
scanf("%d%d",&a,&b);
c=a*b;
printf("the result is :%f",c);
break;
}
case 4:
{
    printf("enter two num:");
scanf("%d%d",&a,&b);
c=a+b;
printf("the result is :%f",c);
break;
}
default:
{
printf("the elementa are wrong");
}
}
}

