#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex() {}

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void output(void)
    {
        cout << "Sum: " << real << " + " << img << "i";
    }
};

int main()
{
    Complex obj1, obj2, obj3;
    int a, b;
    cout << "Enter the real and imaginary value of first complex number: ";
    cin >> a >> b;
    obj1 = Complex(a, b);
    cout << "Enter the real and imaginary value of second complex number: ";
    cin >> a >> b;
    obj2 = Complex(a, b);
    obj3 = obj1 + obj2;
    obj3.output();
    return 0;
}