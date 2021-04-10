#include<iostream>
#include<stdlib.h>
using namespace std;
static int n=0;
class num{
    public:inline num(){
    cout<<++n<<" ";
    }
};

using namespace std;
int main(){
    int x;
    cout<<"enter the maximum number";
    cin>>x;
    num obj[x];
    return 0;   
}