#include"iostream"
using namespace std;
bool isVowel(char x){
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<10;i++){
    if(x == vowel[i])
        return true;
    }
    return false;
}
int main(){
    char a;
    cout<<"enter a character : ";
    cin>>a;
    isVowel(a)?cout<<"\n vowel":cout<<"\n consonent";
    return 0;
}