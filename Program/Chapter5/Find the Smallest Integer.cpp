#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, min = 0;

    while (cin >> a)
    {
        cin >> c;
        min = c;

        for (b = a; b > 1; b = b - 1)
        {
            cin >> d;

            if (d <= min)
            {
                min = d;
            }
        }

        cout << min << endl;
    }
    return 0;
}