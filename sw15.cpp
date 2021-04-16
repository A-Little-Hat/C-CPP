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
class D : public B
{
private:
    int c;

public:
    void mul();
    void display();
};
void B::get_ab()
{
    a = 5;
    b = 10;
}
int B::get_a() { return a; }
void B::show_a() { cout << "a=" << a << endl; }
void D::mul() { c = b * get_a(); }
void D::display()
{
    cout << "a= " << get_a() << endl
         << "b= " << b << endl;
}
int main()
{
    D d;
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b = 20;
    d.mul();
    d.display();
    return 0;
}