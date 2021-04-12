#include"stdio.h"
#include"conio.h"
#include"math.h"
void main()
 {
 	int x,a,b;
 	clrscr();
 	while(1)
 	{
 	printf("\n *****calculator*****");
 	printf("\n 1. addition \n 2. substraction \n 3. multiplication \n 4. division \n 5.exponent calculation \n*************** \n \n please enter your choice : ");
 	scanf("%d",&x);
 	switch(x)
 	 {
 	 	case 1:
 	 		{
 	 			printf("enter two integer : ");
 	 			scanf("%d%d",&a,&b);
 	 			printf("sum = %d \n thank you",a+b);
 	 			break;
			  }
		case 2:
 	 		{
 	 			printf("enter two integer : ");
 	 			scanf("%d%d",&a,&b);
 	 			printf("sub = %d \n thank you",a-b);
 	 			break;
			  }
		case 3:
 	 		{
 	 			printf("enter two integer : ");
 	 			scanf("%d%d",&a,&b);
 	 			printf("mul = %d \n thank you",a*b);
 	 			break;
			  }
		case 4:
 	 		{
 	 			printf("enter two integer : ");
 	 			scanf("%d%d",&a,&b);
 	 			printf("div = %f \n thank you",a/b);
 	 			break;
			  }
		case 5:
 	 		{
 	 			printf("enter two integer : ");
 	 			scanf("%d%d",&a,&b);
 	 			printf("result = %d \n thank you",pow(a,b));
 	 			break;
			  }	
		default :
			{
				printf("\n wrong input \n please try again.\n enter any key to continue");
				getch();
				main();
			}
		}
		printf("\n do you want to continue??? \n press any key to continue...\n press zero to exit...");
		scanf("%d",&a);
		if(a==0) 
		break;
	
   
 }
 printf("\n visit again.have a nice day");
   getch();
}
