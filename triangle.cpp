//equilateral same 0
//isoscale 2 same 1
//scalen no same 2
/*Create a class Traingle. Include overloaded functions for calculating area. Overload assignment operator and equality operator. */

#include"iostream"
#include"math.h"
using namespace std;
class triangle
{
	private:int area,a,b,c;
	public:	triangle (int x,int y,int z)
				{
					this->a=x;
					this->b=y;
					this->a=z;
				}
			display()
			{
				cout<<"sides are : "<<this->a<<" "<<this->b<<" "<<this->c<<endl;
				}	
			
			area(int a)
			{
				int s=a+a+a;
				area= pow((s*(s-a)*(s-a)*(s-a)),2);
                 cout<<endl<<"area of the triangle is : "<<area<<"cm2";
			}	
			area(int a,int b)
			{
				int s=a+b+a;
				area= pow((s*(s-a)*(s-a)*(s-b)),2);
                 cout<<endl<<"area of the triangle is : "<<area<<"cm2";
			}
			area(int a,int b, int c)
			{
				int s=a+b+c;
				area=pow((s*(s-a)*(s-b)*(s-c)),2);
            cout<<endl<<"area of the triangle is : "<<area<<"cm2";
			}
			int getarea()
			{
				return this->area;
			}
			friend operator=(triangle &t1);
			friend operator==(triangle &t1,triangle &t2);
}
friend triangle::operator==(triangle &t1,triangle &t2)
			{
				if(t1.getarea()=t2.getarea)
				return true;
			}
			
friend triangle::operator=(triangle &t1)
{
	this->a=t1.a;
	this->b=t1.b;
	this->c=t1.c;
}
void trimenu()
{
	system("cls");
	cout<<"what type of triangle you want.?"<<endl;
	cout<<"1. equilateral"<<endl<<"2. isoscale"<<endl<<"3. scalen"<<endl;
	cout<<"choose your option";
}
void menu()
{
	cout<<"what type of operation do you want to perform.?"<<endl;
	cout<<"1. assign a new triangle"<<endl<<"2. check equality of the triangle"<<endl;
	cout<<"choose your option";
	cin>>int y;
	switch(y)
	{
		case 1:{
			triangle t2;
			t2=t;
			cout<<"assigned successfully";
			cout<<"new triangle's ";
			t2.display();
			break;
		}
		case 2:{
			cout<<"enter the value of the 1st side : ";
			cin<<int a;
			cout<<"enter the value of the 2nd side : ";
			cin<<int b;
			cout<<"enter the value of the 3rd side : ";
			cin<<int c;
			triangle t2(a,b,c);
			t2.area(a,b,c);
			if(t2==t)
			cout<<"triangles are same.";
			else
			cout<<"triangles are not same.";
			break;
		}
		default :{
			cout<<"wrong input... try again...Thank you...";
			break;
		}
	}
}
int main()
{
	trimenu();
	cin>>int y;
	switch(y){
		case 1:{
			cout<<"enter the value of a side : ";
			cin<<int a;
			triangle t(a,a,a);
			t.area(a);
			menu();
			break;
		}
		case 2:{
			cout<<"enter the value of the same side : ";
			cin<<int a;
			cout<<"enter the value of the 3rd side : ";
			cin<<int b;
			triangle t(a,b);
			t.area(a,b);
			menu();
			break;
		}
		case 3:{
			cout<<"enter the value of the 1st side : ";
			cin<<int a;
			cout<<"enter the value of the 2nd side : ";
			cin<<int b;
			cout<<"enter the value of the 3rd side : ";
			cin<<int c;
			triangle t(a,b,c);
			t.area(a,b,c);
			menu();
			break;
		}
		default:{
			cout<<"wrong input try again....";
			main();
			exit ;
		}
	}
	
	return 0;
}
