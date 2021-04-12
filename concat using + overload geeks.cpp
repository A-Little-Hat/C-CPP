
// C++ Program to concatenate two string 
// using unary operator overloading 
#include <iostream> 
#include <string.h> 
  
using namespace std; 
class AddString { 
public:
    char s1[25], s2[25];
    AddString(char str1[], char str2[]) 
    {
        strcpy(this->s1, str1); 
        strcpy(this->s2, str2); 
    } 
    void operator+() 
    { 
        cout << "\nConcatenation: " << strcat(s1, s2); 
    } 
}; 
int main() 
{
    char str1[50] , str2[50];
    cout<<"enter a string : ";
    gets(str1);
    cout<<endl<<"enter another string : ";
    gets(str2);
    AddString a1(str1, str2); 
    +a1; 
    return 0; 
} 
