#include"stdio.h"
#include"conio.h"
#include"ctype.h"
#define MAX 1000
int main()
 {
 	 int n=0;
 	 char c,a[MAX];
 	 printf("\n*************QUIZ*************\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\nTOAL 5 QUESTIONS & 1 MARKS FOR EACH\n 1 2 3 4 5\n PRESS Y TO START");
 	 if(toupper(getchar())=='Y')
 	 {
 	 	
 	 	printf("\n what is the capital of INDIA?");
 	 	gets(a);
 	 	touppper(a);
 	 	if(a=='DELHI') 
 	 	n++;
 	 	getch();
 	 	
 	 	printf("\n who is the father of c language?");
 	 	gets(a);
		toupper(a);
		if(a=='KANINGHAM'||a=='RICHE'||a=='KANINGHAM RICHE')
 	 	n++;
 	 	getch();
 	 	
 	 	printf("\n who gave the concept of boolean alzebra?");
 	 	gets(a);
		toupper(a);
		if(a=='GORGE'||a=='BOOLE'||a=='GORGE BOOLE')
 	 	n++;
 	 	getch();
 	 	
 	 	printf("\n who is the 'BISMAL' of burdwan?");
 	 	gets(a);
 	 	toupper(a);
		if(a=='ANKUSH'||a=='ANKUSHDA'||a=='ANKUSH DA'||a=='ANKUSH')
 	 	n++;
 	 	getch();
 	 	
 	 	printf("\n what is the full name of PM of INDIA?");
 	 	gets(a);
 	 	toupper(a);
		if(a=='NARENDRA DAMODAR BHAI MODI')
 	 	n++;
 	 	getch();
	  }
 	 else
 	 {
 	 	printf("\n wrong input. try again.");
 	 	main();
	  }
	  
	  printf("\n your score is %d out of 5.\n thank you.\n have a nice day.",n);
	  getch();
	  return(0);
 }
