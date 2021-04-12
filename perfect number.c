# include <stdio.h>   

int main()   
{   
 int i,c=0, Number, sum = 0 , j ,arr[10];
 for(i=0;i<10;i++)
 {
 	printf("\n enter a number");
 	scanf("%d",&arr[i]);
  } 
 for(j=0;j<10;j++)  
 {
  sum=0;
  Number=arr[j] ;
 
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     sum = sum + i ;   
  }    

 if (sum == Number) 
 {  
    printf("\n %d is a Perfect Number", Number) ;
	c++;
}
 else   
    printf("\n%d is not the Perfect Number", Number) ; 
}
printf("\n total number of perfect number is : %d",c);

return 0 ;   
}
