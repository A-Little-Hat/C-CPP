#include<iostream>
using namespace std;
class num{
    private:int number;
    public:inline num(){
        cout<<endl<<"enter the number...";
        cin>>number;
    }
    inline void display(){
        cout<<endl<<"number is "<<number;
    }
    friend void swap(num &,num &);
};
void swap(num &a,num &b){
    a.number+=b.number;
    b.number=a.number-b.number;
    a.number=a.number-b.number;
}
int main(){
    num a,b;
    cout<<"before swap";
    a.display();
    b.display();
    swap(a,b);
    cout<<endl<<"after swap";
    a.display();
    b.display();
    return 0;
}