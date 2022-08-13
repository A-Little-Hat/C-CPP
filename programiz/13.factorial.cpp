#include"iostream"
using namespace std;
int factorial(int x){
    if(x>1){
        return x * factorial(x-1);
    }
    else if(x==0){
        return 1;
    }
}
int main(){
    int n;
    cout<<"enter the number of n : ";
    cin>>n;
    if(n<0){
        cout<<"\ninvalid input.";
        exit(0);
    }else{
    cout<<factorial(n);
    }
    return 0;
}