#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    float sum, average;

    for (a = 0, b = 0, sum = 0, average = 0; 1; cin >> a)
    {
        if (b == 0)
        {
            cin >> a;
        }

        if (a != 9999)
        {
            sum = sum + a;
            b = b + 1;
        }

        if (a == 9999)
        {
            if (b == 0)
            {
                b = 1;
            }
            average = sum / b;
            cout << fixed << setprecision(2) << average << endl;
            sum = 0;
            b = 0;
        }
    }
    return 0;
}
