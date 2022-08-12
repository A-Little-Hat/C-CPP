#include"iostream"
using namespace std;
bool isLeap(int a){
    if (a%100==0 && a%400==0){
        return true;
    }
    if (a%100!=0 && a%4==0){
        return true;
    }
    return false;
}
int main(){
    int year;
    cout<<"enter the year : ";
    cin>>year;
    isLeap(year)?cout<<"\nLeap Year.":cout<<"\nNot a Leap Year.";
    return 0;
}