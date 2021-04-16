#include <iostream>
#include "math.h"
using namespace std;

class Area
{
private:
    int choice, len, bdth;
    double calc, r, l, b, h, g;

public:
    void input(void);
    void area(double);
    void area(int, int);
    void area(double, double, double);
};

void Area::input(void)
{
    cout << "1. Area of circle\n";
    cout << "2. Area of rectangle\n";
    cout << "3. Area of triangle\n";
    cout << "4. Exit\n";
    cout << "Enter your choice...\n>";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the radius: ";
        cin >> r;
        area(r);
        input();
    case 2:
        cout << "Enter the length and breadth: ";
        cin >> len >> bdth;
        area(len, bdth);
        input();
    case 3:
        cout << "Enter the values of the sides: ";
        cin >> b >> h >> g;
        area(b, h, g);
        input();
    case 4:
        exit(0);
    default:
        cout << "Invalid choice!\n";
        input();
    }
}

void Area::area(double rad)
{
    cout << "Area of the circle: " << (3.14 * rad * rad) << " Sq. Cm.\n";
}

void Area::area(int ln, int bd)
{
    cout << "Area of the rectangle: " << (ln * bd) << " Sq. Cm.\n";
}

void Area::area(double bs, double ht, double g)
{
    double s = bs + ht + g;
    cout << "Area of the triangle: " << pow((s * (s - bs) * (s - ht) * (s - g)), .5) << " Sq. Cm.\n";
}

int main()
{
    Area obj;
    obj.input();
    return 0;
}