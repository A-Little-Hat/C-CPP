#include"iostream"
#include"string.h"
using namespace std;
void operator+(char *a ;char *b){
	strcat(a,b);
	return *a;
}
int main()
{
	char a[100],b[100],c[200];
	cout<<"enter a string : ";
	gets(a);
	cout<<endl<<"enter another string : ";
	gets(b);
	&a+&b;
	return 0;
	
}
