#include"iostream"
#include"conio.h"
#include"math.h"
using namespace std;
class box{
	private: float l,b,h,v,x;
	public: box(){
		cout<<"enter the length breadth and height of the box in cm : ";
		cin>>l>>b>>h;
	}
			inline float sarea(){
				this->x=2*(l*b+b*h+h*l);
				return x;
			}
			inline float vol(){
				this->v=(l*b*h);
				return v;
			}
			friend operator==(box &a,box &b){
				if(a.vol()==b.vol()){
					cout<<endl<<"two boxes are equal. ";
				}
				else{
					cout<<endl<<"two boxes are not equal in volume.";
				}
			}
			iscube(){
				if(l*l*l==l*b*h){
					cout<<endl<<"the box is a cube. ";
				}
				else{
					cout<<endl<<"the box is a cuboid. ";
				}
			}
			float operator++(){
				this->v++;
				return v;	
			}
			float operator--(){
				this->x--;
				return x;
			}
};
int main()
{	
	int f;
	do{
	int c;
	cout<<"menu\n1.Calculate surface area\n2. Calculate volume\n3. Overload ++ operator to increment volume \n4. Overload - - operator to decrement surface area\n5. Overload == operator to check for eqality of two boxes using friend function. \n6. Check if it is a cube or cuboid"<<endl;
	cin>>c;
	switch(c){
		case 1: {
			box a;
			a.sarea();
			break;
		}
		case 2:{
			box a;
			float v=a.vol();
			cout<<"volume is "<<v<<" cm2.";
			break;
		}
		case 3:{
			box a;
			float v=a.vol();
			cout<<endl<<"voluem is "<<v<<" cm3";
			v=++a;
			cout<<endl<<"new voluem is "<<v<<" cm3";
			break;
		}
		case 4:{
			box a;
			float x=a.sarea();
			cout<<endl<<"surface area = "<<x<<" cm2";
			x=--a;
			cout<<endl<<"new surface area = "<<x<<" cm2";
			break;
		}
		case 5:{
			box a;
			box b;
			(a==b);
			break;
		}
		case 6:{
			box a;
				a.iscube();	
			break;
		}
		default : {
			cout<<endl<<"wrong input...try again press any key to continue...";
			getch();
			system("cls");
			main();
			break;
		}
	}
	cout<<endl<<endl<<"press 0 to exit...";
	cin>>f;
	system("cls");
	}while(f!=0);	
	return 0;
}
