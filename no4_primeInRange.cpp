#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a range:";
    int i, a, b, c;
    cin >> a >> b;
    while (a <= b)
    {
        if (a != 1)
        {
            c = 0;
            for (i = 2; i < a; i++)
            {
                if (a % i == 0)
                    c++;
            }
            if (c == 0)
                cout << a << ",";
        }
        a++;
    }
    return 0;
}
