#include"iostream"
using namespace std;
int main(){
    int a,b,q,r;
    cout<<"enter two number : ";
    cin>>a>>b;
    q=a>b?a/b:b/a;
    r=a>b?a-((a/b)*b):b-((b/a)*a);
    cout<<"\nquotient is : "<<q;
    cout<<"\nreminder is : "<<r;
    return 0;
}