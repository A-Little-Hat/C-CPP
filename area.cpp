#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14
void area(float r)
        {
            cout<<endl<<"area of the circle is : "<<(PI*r*r)<<"cm2";

        }
void area(float a, float b, float c)
        {
            float s=a+b+c;
            cout<<endl<<"area of the triangle is : "<<pow((s*(s-a)*(s-b)*(s-c)),2)<<"cm2";
        }
void area(float a,float b)
    {
        cout<<endl<<"area of the triangle is : "<<a*b<<"cm2";
    }
int main()
{
    int c;
    cout<<"AREA CALCULATOR\n CHOOSE YOUR CHOICE \n\n 1.CIRCLE\n2.TRIANGLE\n3.RECTANGLE";
    cin>>c;
    switch(c)
    {
        case 1:
                { 
               
                float r;
                cout<<"enter the value of the radious in cm : ";
                cin>>r;
                area(r);
                break;
                }
        case 2:
                {
                 float a,b,c;
                 cout << "enter the value of three sides of the triangle in cm : ";
                 cin >> a >> b >> c;
                 area(a, b, c);
                 break;
                }     
        case 3:
                {
                    float a,b;
                    cout << "enter the value of two sides of the ractangle in cm : ";
                    cin>>a>>b;
                    area(a,b);
                    break;
                }         
        default : 
                    {
                        cout<<"wrong input please try again.....\n enter any key to continue....";
                        system("cls");
                        main();
                    }
    }          
        return 0;
}
