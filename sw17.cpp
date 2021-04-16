#include "iostream"
using namespace std;
class student
{
private:
    int roll;

public:
    void get_num(int);
    void put_num();
};
void student ::get_num(int a)
{
    roll = a;
}
void student::put_num()
{
    cout << "roll number=" << roll << endl;
}
class test : public student
{
protected:
    float sub1, sub2;

public:
    void get_marks(float, float);
    void put_marks();
};
void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test::put_marks()
{
    cout << "marks in sub1: " << sub1 << endl;
    cout << "marks in sub2: " << sub2 << endl;
}
class result : public test
{
    float total;

public:
    void display();
};
void result::display()
{
    total = sub1 + sub2;
    put_num();
    put_marks();
    cout << "total= " << total << endl;
}
int main()
{
    result student;
    student.get_num(111);
    student.get_marks(75.0, 59.5);
    student.display();
    return 0;
}