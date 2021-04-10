#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class str{
    private:char s[100];
    public:inline str(){
        cout<<endl<<"enter the string...: ";
        fgets(s,100,stdin); 
    }
    bool operator== (str &b){
        if(!strcmp(s,b.s)){
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main(){
    str a,b;
    cout<<endl<<"comparison";
    if(a==b){
        cout<<endl<<"both are equal";
    }
    else
    {
        cout<<endl<<"not equal";
    }
    return 0;
    
}