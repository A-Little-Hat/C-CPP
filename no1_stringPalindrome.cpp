#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Enter a string:";
    char str[1000];
    cin >> str;
    int i = 0, j = strlen(str) - 1, flag = 0;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}