#include <iostream>

using namespace std;

int measure(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int c, d;
    while (cin >> c >> d)
    {
        cout << measure(c, d) << endl;
    }
}