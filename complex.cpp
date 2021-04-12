#include"iostream"
using namespace std;

class complex
{
	private: int real,img;
	public: inline void display(void)
						{
					cout<<real<<"+"<<img<<"i";
						}
			friend	void add (complex a,complex b)
					{
						complex c;
						c.real=a.real+b.real;
						c.img=a.img+b.img;
					}
			void input()		
			{
				cout<<"enter the real part";
				cin>>real;
				cout<<"enter the complex part";
				cin>>img;
			}
			
};
 int main()
 {
 	complex a,b,c;
 	a.input();
 	b.input();
 	a.display();
 	b.display();
 	add(a,b);
 	c.display();
 	return (0);
 }
