/*Create a class Traingle. Include overloaded functions for calculating area. Overload assignment operator and equality operator. */
#include"iostream"
#include"math.h"
using namespace std;
class triangle
{
  private:
    int area1,a,b,c;
  public:
    triangle(){}
    triangle (int x,int y,int z) {
      a=x;
      b=y;
      c=z;
    }

    void display() {
      cout<<"sides are : "<<this->a<<" "<<this->b<<" "<<this->c<<endl;
    }  
      
    void area(int x) {
        a=x;b=x;c=x;
      int s=x+x+x;
      area1= pow((s*(s-x)*(s-x)*(s-x)),.5);
      cout<<endl<<"area of the triangle is : "<<area1<<"cm2";
    }

    void area(int x,int y) {
        a=x;b=x;c=y;
      int s=a+b+c;
      area1= pow((s*(s-a)*(s-a)*(s-b)),.5);
      cout<<endl<<"area of the triangle is : "<<area1<<"cm2";
    }

    void area(int x,int y, int z) {
        a=x;b=y;c=z;
      int s=a+b+c;
      area1=pow((s*(s-a)*(s-b)*(s-c)),.5);
      cout<<endl<<"area of the triangle is : "<<area1<<"cm2";
    }
    int getarea() {
        area(a,b,c);
      return this->area1;
    }
    friend bool operator==(triangle &t1,triangle &t2);
    void operator=(triangle &t1);
};
bool operator==(triangle &t1,triangle &t2) {
  if(t1.getarea()==t2.getarea())
  return true;
  else
  {
      return false;
  }
  
}
      
void triangle::operator=(triangle &t1) {
  a=t1.a;
  b=t1.b;
  c=t1.c;
}

void trimenu()
{
  cout<<"what type of triangle you want.?"<<endl;
  cout<<"1. equilateral"<<endl<<"2. isoscale"<<endl<<"3. scalen"<<endl;
  cout<<"choose your option";
}
triangle t2,t;
void menu(triangle t)
{
  int y, a, b, c;
  cout << "\nwhat type of operation do you want to perform.?" << endl;
  cout<<"1. assign a new triangle"<<endl<<"2. check equality of the triangle"<<endl;
  cout<<"choose your option";
  cin>>y;
  switch(y)
  {
    case 1:{
      cout<<"enter the value of the 1st side : ";
      cin>>a;
      cout<<"enter the value of the 2nd side : ";
      cin>>b;
      cout<<"enter the value of the 3rd side : ";
      cin>>c;
      triangle t3(a,b,c);
      t2=t3;
      cout<<"assigned successfully";
      cout<<"new triangle's ";
      t2.display();
      break;
    }
    case 2:{
      cout<<"enter the value of the 1st side : ";
      cin>>a;
      cout<<"enter the value of the 2nd side : ";
      cin>>b;
      cout<<"enter the value of the 3rd side : ";
      cin>>c;
      triangle t2(a,b,c);
      if(t2==t)
      cout<<endl<<"triangles are same.";
      else
      cout<<endl<<"triangles are not same.";
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
  int a, b, c, y;
  cin>>y;
  switch(y){
    case 1:{
      cout<<"enter the value of a side : ";
      cin>>a;
      triangle t(a,a,a);
      t.area(a);
      menu(t);
      break;
    }
    case 2:{
      cout<<"enter the value of the same side : ";
      cin>>a;
      cout<<"enter the value of the 3rd side : ";
      cin>>b;
      triangle(a,a,b);
      triangle t;
      t.area(a,b);
      menu(t);
      break;
    }
    case 3:{
      cout<<"enter the value of the 1st side : ";
      cin>>a;
      cout<<"enter the value of the 2nd side : ";
      cin>>b;
      cout<<"enter the value of the 3rd side : ";
      cin>>c;
      triangle t(a,b,c);
      t.area(a,b,c);
      menu(t);
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