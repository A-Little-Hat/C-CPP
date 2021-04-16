#include <bits/stdc++.h>
using namespace std;
int n;
void reverseArray(int *arr)
{
    int *x = arr, *y = arr + n - 1, *temp;
    while (x < y)
    {
        *temp = *x;
        *x = *y;
        *y = *temp;
        x++;
        y--;
    }
    cout << "Reversed elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
}
int main()
{
    int i;
    cout << "enter the number of element :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(arr);
    return 0;
}