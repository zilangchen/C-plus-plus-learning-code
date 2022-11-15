#include <iostream>

using namespace std;

int main()
{
    int times, a, b, c, d;
    while (cin >> times)
    {

        if (times > 20)
        {
            times = 0;
        }

        a = times;
        b = times;
        c = times;
        d = times;

        while (a > 0)
        {
            a = a - 1;
            cout << "*";
        }

        if (times > 1)
        {
            cout << endl;
        }

        while (b > 2)
        {
            cout << "*";

            while (c > 2)
            {
                cout << " ";
                c = c - 1;
            }

            if (c = 2)
            {
                c = times;
            }

            cout << "*";
            cout << endl;
            b = b - 1;
        }

        if (times > 1)
        {
            while (d > 0)
            {
                d = d - 1;
                cout << "*";
            }
        }

        cout << endl
             << endl;
    }

    return 0;
}