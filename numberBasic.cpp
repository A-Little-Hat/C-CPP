// Question no 4

#include <iostream>
using namespace std;
int main() {
  int n,i,count=0;
  bool isPrime = true;
  cout << "Enter an integer: ";
  cin >> n;
  if ( n % 2 == 0)
    cout << n << " is even.\n";
  else
    cout << n << " is odd.\n";
  if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number\n";
    else{
        cout << n << " is composite number\n";
        cout << "Factors of " << n << " are: ";  
        for(i = 1; i <= n; ++i) {
          if(n % i == 0){
            cout << i << " ";
            count++;
          }
        }
        cout<<"\ntotal factors : "<<count;
    }
  
  return 0;
}