#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    long cellNumber;

public:
    virtual void getData(void)
    {
        cout << "Enter the name:";
        cin >> name;
        cout << "Enter the mobile number: ";
        cin >> cellNumber;
    }
    virtual void displayData(void)
    {
        cout << "Name: " << name;
        cout << "Mobile Number: " << cellNumber;
    }
};

class Student : public Person
{
private:
    int std, roll;

public:
    void getData(void)
    {
        cout << "Enter the name:";
        cin >> name;
        cout << "Enter the class: ";
        cin >> std;
        cout << "Enter the roll no.: ";
        cin >> roll;
        cout << "Enter the mobile number: ";
        cin >> cellNumber;
    }
    void displayData(void)
    {
        cout <<endl << "Name: " << name << endl;
        cout << "Class: " << std << endl;
        cout << "Roll No.:" << roll << endl;
        cout << "Mobile Number: " << cellNumber << endl;
    }
};

class Teacher : public Person
{
private:
    int salary;
    string subject;

public:
    void getData(void)
    {
        cout << "Enter the name:";
        cin >> name;
        cout << "Enter the subject taught: ";
        cin >> subject;
        cout << "Enter the salary: ";
        cin >> salary;
        cout << "Enter the mobile number: ";
        cin >> cellNumber;
    }
    void displayData(void)
    { 
        cout << endl<< "Name: " << name << endl;
        cout << "Subject taught: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "Mobile Number: " << cellNumber << endl;
    }
};

int main()
{
    Person *obj;
    cout << "Choose an option.." << endl;
    cout << "1. Student" << endl;
    cout << "2. Teacher:" << endl;
    cout << "->";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        obj = new Student();
        obj->getData();
        cout<<"data added successfully";
        obj->displayData();
        break;
    case 2:
        obj = new Teacher();
        obj->getData();
        cout<<"data added successfully";
        obj->displayData();
        break;
    default:
        cout << "Invalid Input!";
        break;
    }
    cout<<"\n\n\n";
    delete obj;
    cout << "Object Deleted!";
    return 0;
}