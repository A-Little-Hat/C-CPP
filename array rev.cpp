// Write a function that reverses the elements of an array in place. The function must accept only one pointer value and return void.
#include"iostream"
using namespace std;
#define MAX 100
int n;
void rev(int *a){
	int l=n-1;
	int i=0;
	while(i<l) 
    { 
        int temp = a[i];  
        a[i] = a[l]; 
        a[l] = temp; 
        i++; 
        l--; 
    }  
}
int main(){
	int i,a[MAX];
	cout<<"enter the length of the array : ";
	cin>>n;
	cout<<"enter the element of the array : ";
	for(i=0;i<n;i++)
	cin>>a[i];
	rev(a);
	cout<<"reverse done...your array is: "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i];
	cout<<endl<<"thank you";
}
