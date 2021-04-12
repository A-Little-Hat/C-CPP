#include"iostream"
#include"conio.h"
#include"stdio.h"
#include"string.h"
#define MAX 50
using namespace std;

static int x=0;

class emp
	{
		private : char name[MAX],id[MAX],des[MAX];
				  int age,exp;
		public	: 	void input(void)
					{
						cout<<"enter name: ";
   					    gets(name);
    					cout<<"enter employee id: ";
    					gets(id);
    					cout<<"enter designation: ";
    					gets(des);
    					cout<<"enter age: ";
    					cin>>age;
    					cout<<"enter years of experience: ";
    					cin>>exp;
    					x++;
					}
					int getId()
    {
        return id;
    }
				  	void display(void)
				  	{
				  		cout<<"name: ";
   					    gets(name);
    					cout<<"\n enter employee id: ";
    					gets(id);
    					cout<<"\n enter designation: ";
    					gets(des);
    					cout<<"\n enter age: ";
    					cin>>age;
    					cout<<"\n enter years of experience: ";
    					cin>>exp;
					}
					
					

	};
	
	
	
	
	
	
					void del(emp e[],int index)
					{
   				 		char c;
    					e[index].display();
    					for(int i=index; i<x-1; i++)
    						{
        						e[i]=e[i+1];

    						}
    					x--;	
					}
					void edit(emp e[],int index)
					{
    					char c;
    					e[index].display();
    					cout<<"you want to edit? (y/n) ";
    					cin>>c;
    					if(c=='y')
    					{
        					e[index].input();
    					}
					}
					void displaylist(emp e[])
{
	int i;
	if(x==0) 
		cout<<"THE TABLE IS EMPTY"<<endl;
		else
		{
	cout<<"THE TABLE"<<endl;
		for(i=0;i<x;i++)
		{
		e[i].display();
		cout<<endl;
	}
}


int search(emp e[])
	{
	int a,p=0,f=0,i;
	cout<<"Enter the code of the employee"<<endl;
	cin>>a;
	for(i=0;i<x;i++)
		{
			if(e[i].id()==a)
			{
			p=i;
			f=1;  
		break;	
			}
		}
 if(f==1)
 return p;
 else
 cout<<"The entered code is not present"<<endl;	
}
void sort(emp e[])
{
	int i,j;
	if(x==0)
	cout<<"TABLE EMPTY"<<endl;
	else
	{
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(e[j].id()>e[j+1].id())
			{
				emp t;
				t=e[j];
				e[j]=e[j+1];
				e[j+1]=t;
			}
		}
	}
	cout<<"The Sorted Table"<<endl;
	for(i=0;i<l;i++)
	{
		e[i].display();
		cout<<endl;
	}
}
}
void main()
{	
	emp e[1000];
	int c;
	int index;
	menu:
	system("CLS");
	cout<<"\t\t\tMAIN MENU\n";
	cout<<"1--> BUILD MASTER TABLE\n";
	cout<<"2--> LIST TABLE\n";
	cout<<"3--> INSERT NEW ENTRY\n";
	cout<<"4--> DELETE OLD ENTRY\n";
	cout<<"5--> EDIT AN ENTRY\n";
	cout<<"6--> SEARCH ENTRY\n";
	cout<<"7--> SORT ENTRIES\n";
	cout<<"8--> EXIT\n";
	cout<<"choose from 1-8: \n";
	cin>>c;
	system("CLS");
	switch(c){
		case 1: cout<<"enter the size of the list: ";
				cin>>length;
				buildList(emp);
				break;
		case 2: showList(emp);
				break;
		case 3:	emp[length+1].input();
				++length;
				break;
		case 4: 
				index = searchList(emp);
				if(index!=-1)
					del(emp,index);
				break;
		case 5:
				index = searchList(emp);
				if(index!=-1)
					edit(emp,index);
				break;
		case 6:
				index = searchList(emp);
				if(index!=-1)
					emp[index].display();
				break;
		case 7: sortList(emp);
				showList(emp);
				break;
		case 8: exit(0);			
	}
	cout<<"press any key to go to main menu...";
	getch();
	goto menu;
	
}
