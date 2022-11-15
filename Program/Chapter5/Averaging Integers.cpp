#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    float sum, average;
    sum = 0;
    b = 0;

    for (c = 0; c != 9999;)
    {
        cin >> c;
        sum = sum + c;
        b = b + 1;
    }

    if (c = 9999)
    {
        sum = sum - 9999;

        if (b > 1)
        {
            b = b - 1;
        }
    }

    average = sum / b;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
