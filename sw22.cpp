#include "iostream"
using namespace std;
template <class T>
T mymin(T a, T b)
{
    return (a < b) ? a : b;
}
int main()
{
    int a = 10, b = 20;
    cout << endl<<"INTEGER"<<endl
         << mymin(a, b);
    float c = 3.14f, d = -6.28f;
    cout << endl<<"FLOAT"<<endl
         << mymin(c, d);
    double e = 1.1, f = 1.11;
    cout << endl<<"DOUBLE"<<endl
         << mymin(e, f);
    char g = 'A', h = 'a';
    cout << endl<<"CHARACTER"<<endl
         << mymin(g, h)<<endl;
    return 0;
}