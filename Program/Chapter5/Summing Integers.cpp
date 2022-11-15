#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum;
    while (cin >> a)
    {
        sum = 0;
        for (b = a; b > 0; b = b - 1)
        {
            cin >> c;
            sum = sum + c;
        }

        cout << sum << endl;
    }

    return 0;
}
