#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number:";
    int n, i, c = 0;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            c++;
    }

    if (c == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}