#include "iostream"
using namespace std;
class B
{
private:
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class D : private B
{
private:
    int c;

public:
    void mul();
    void display();
};
void B::get_ab()
{
    cout << "enter values for a and b";
    cin >> a >> b;
}
int B::get_a() { return a; }
void B::show_a() { cout << "a=" << a << endl; }
void D::mul()
{
    get_ab();
    c = b * get_a();
}
void D::display()
{
    show_a();
    cout
         << "b= " << b << endl
         << "c=a*b\nvalue of c=" << c << endl;
}
int main()
{
    D d;
    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}