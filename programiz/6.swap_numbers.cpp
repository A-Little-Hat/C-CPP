#include"iostream"
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number : ";
    cin>>a>>b;
    cout<<"before swapping a = "<<a<<" b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a = "<<a<<" b = "<<b;
    return 0;
}