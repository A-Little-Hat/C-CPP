#include"iostream"
using namespace std;
class complex{
	private: float r,i;
	public: input(float x,float y){
		r=x;
		i=y;
	}
			friend complex operator+(complex &a,complex &b){
				complex c;
				float x=a.r+b.r;
				float y=a.i+b.i;
				c.input(x,y);
				return c;
			}
			void display (){
				cout<<"comples number is "<<r<<"+"<<i<<"i";	
			}
};
int main()
{
	complex a,b,c;
	float x,y;
	cout<<"enter real and imaginary number for first number :  ";
	cin>>x>>y;
	a.input(x,y);
	cout<<endl<<"enter real and imaginary number for second number :  ";
	cin>>x>>y;
	b.input(x,y);
	c=a+b;
	c.display();
	return 0;
}
