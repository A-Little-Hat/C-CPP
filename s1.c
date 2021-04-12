#include"stdio.h"
#include"conio.h"
 void main()
  {
  	 int k,n,m,sum=0;
  	 printf("\n enter a integer.");
  	 scanf("%d", &n);
  	 m=n;
  	 if(n==1)
	   printf("\n binary is 1.");
	else
	{
	while(m!=0)
  	  {
  	  	k=0;
  	  	k=m%2;
  	  	sum=k*10+sum;
  	  	m=m/2;
  	  }
  	 printf("\n binary is %d.",sum);
  }
	 getch(); 
  }
