#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, c;
    while (cin >> a)
    {
        for (int b = 0; a > 0;)
        {
            b = a % 10;
            a = (a - b) / 10;
            c = c * 10 + b;
        }

        cout << c << endl;
        c = 0;
    }
}