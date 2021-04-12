
#include"iostream"
#include"string.h" 
using namespace std; 
class AddString {  
	public: char str[100];
			AddString(){
						} 
			AddString(char str[]) 
			{ 
			strcpy(this->str, str); 
			}	 
			AddString operator+(AddString& S2) 
			{ 
			AddString S3; 
			strcat(this->str, S2.str); 
			strcpy(S3.str, this->str); 
			return S3; 
			} 
				}; 
int main() 
{ 
	char str1[100],str2[100];
	cout<<"enter a string : ";
    gets(str1);
    cout<<endl<<"enter another string : ";
    gets(str2); 
	AddString a1(str1); 
	AddString a2(str2); 
	AddString a3;
	a3 = a1 + a2; 
	cout << "Concatenation: " << a3.str; 
	return 0; 
}

