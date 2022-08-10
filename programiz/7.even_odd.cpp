#include"iostream"
using namespace std;
bool isEven(int x){
    if(x%2==0)
        return true;
    else
        return false;
}
int main(){
    int a;
    cout<<"enter a number : ";
    cin>>a;
    isEven(a)?cout<<"\n Even":cout<<"\n Odd";
    return 0;
}