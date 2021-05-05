#include "iostream"
using namespace std;

void printPattern(int n)
{
	int space = n - 1;
	int c=1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < space; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << c++<<" ";
		cout << endl;
		space--;
	}
	space = 1;
	for (int i = n-1; i > 0; i--)
	{
		for (int j = 0; j < space; j++)
			cout << " ";
		for (int j = 0;j < i;j++)
			cout << c++<<" ";
		cout << endl;
		space++;
	}
}
int main()
{
    int n;
    cout<<"enter the no of highest row : ";
    cin>>n;
	printPattern(n);
	return 0;
}
