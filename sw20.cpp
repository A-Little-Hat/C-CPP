#include "iostream"
using namespace std;
class base
{
public:
    void display()
    {
        cout << "\n display base";
    }
    virtual void show()
    {
        cout << "\n virtual base class";
    }
};
class derived : public base
{
public:
    void display() { cout << "\n display derived"; }
    void show() { cout << "\n show derived"; }
};
int main()
{
    base b;
    derived d;
    base *bptr;
    cout << "\n bptr points to base\n";
    bptr = &b;
    bptr->display();
    bptr->show();
    cout << "\n\n bptr points derived\n";
    bptr = &d;
    bptr->display();
    bptr->show();
    return 0;
}