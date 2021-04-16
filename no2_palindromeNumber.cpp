#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number:";
    int n, temp = 0, N;
    cin >> n;

    for (N = n; N > 0; N /= 10)
        temp = (temp * 10) + (N % 10);

    if (temp == n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
