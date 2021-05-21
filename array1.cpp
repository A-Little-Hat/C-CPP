// Question no 3

#include <iostream>
using namespace std;
int main() {
  int arr[100],even=0,odd=0;
  bool toggle=true;
  cout << "enter numbers\n";
  for(int i=0;i<100;i++){
    cin>>arr[i];
    if(toggle){
      even+=arr[i];
      toggle=false;
    }else{
      odd+=arr[i];
      toggle=true;
    }
  }
  if(even>odd){
    cout<<"\nsum of even is greater.";
  }else{
    cout<<"\nsum of odd is greater.";
  }
  return 0;
}