#include "iostream"
using namespace std;
class M
{
protected:
    int m;

public:
    void get_m(int a)
    {
        m = a;
    }
};
class N
{
protected:
    int n;

public:
    void get_n(int a)
    {
        n = a;
    }
};
class P : public M, public N
{
public:
    void display()
    {
        cout << "m= " << m << endl
             << "n= " << n << endl
             << "m*n= " << m * n << endl;
    }
};
int main()
{
    P f;
    f.get_m(10);
    f.get_n(20);
    f.display();
    return 0;
}