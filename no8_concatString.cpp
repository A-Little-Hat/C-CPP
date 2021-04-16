#include <iostream>
#include <string>
using namespace std;

class Concat
{
private: string str;
public:
    void input(void);
    Concat operator+(Concat);
    void output(void);
};

void Concat::input(void)
{
    cout << "Enter a string: ";
    cin >> str;
}

Concat Concat::operator+(Concat obj1)
{
    Concat temp;
    temp.str = str + obj1.str;
    return temp;
}

void Concat::output(void)
{
    cout << "New String: " << str;
}

int main()
{
    Concat obj1, obj2, obj3;
    obj1.input();
    obj2.input();
    obj3 = obj1 + obj2;
    obj3.output();
    return 0;
}