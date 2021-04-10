#include<iostream>
using namespace std;
class num{
    private:float number;
    public:inline num(){
        cout<<endl<<"enter the number..."<<endl;
        cin>>number;
    }
    num(float a){
        number=a;
    }
    inline void display(){
        cout<<endl<<"number is "<<number;
    }
    num operator+ (num &a){
        num c(0);
        c.number=number+a.number;
        return c;
    }
    num operator- (num &a){
        num c(0);
        c.number=number-a.number;
        return c;
    }
    num operator* (num &a){
        num c(0);
        c.number=number*a.number;
        return c;
    }
    num operator/ (num &a){
        num c(0.0);
        c.number=number/a.number;
        return c;
    }
    bool operator== (num &a){
        if(number==a.number)
        return true;
        else
        {
            return false;
        }
        
    }
};
int menu(){
    int n;
    cout<<endl<<"choose your option..."<<endl<<"1. add\n2. sub\n3. mul\n4. div\n5. comp\n"<<endl;
    cin>>n;
    return n;
}
int main(){
    int c;
    do{
        c=menu();
        switch(c){
            case 1:{
                num a,b;
                num r=a+b;
                r.display();
                break;
            }
            case 2:{
                num a,b;
                num r=a-b;
                r.display();
                break;
            }
            case 3:{
                num a,b;
                num r=a*b;
                r.display();
                break;
            }
            case 4:{
                num a,b;
                num r=a/b;
                r.display();
                break;
            }
            case 5:{
                num a,b;
                if(a==b){
                    cout<<endl<<"both numbers are same...";
                }
                else{
                    cout<<endl<<"numbers did not match";
                }
                break;
            }
            default:{
                cout<<endl<<"wrong choich...";
                break;
            }
        }
    cout<<endl<<"press any key to continue... press 0 to exit...";
    cin>>c;
    }while(c!=0);
    return 0;
}    
