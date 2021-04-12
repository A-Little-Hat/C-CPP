#include"stdio.h"
#include"conio.h"
#include"math.h"
 void main()
  {
  	int i,n,k,sum=0;
  	for(n=100;n<=999;n++)
  	 {
  	 	sum=0;
  	 	i==n;
  	 	while(n!=0)
  	 	 {
  	 	 	k=0;
  	 	 	k=n%10;
  	 	 	sum=sum+pow(k,3);
  	 	 	n=n/10;
			}
			if(i==sum)
		printf("\n %d is amstrong number.",i);	
	   }
	getch();   
  }
