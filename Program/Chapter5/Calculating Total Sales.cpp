#include <iostream>
#include <iomanip>

using namespace std;

float adding(int num, int quentity)
{
    float price;

    switch (num)
    {
    case 1:
    {
        price = 2.98 * quentity;
        break;
    }

    case 2:
    {
        price = 4.50 * quentity;
        break;
    }

    case 3:
    {
        price = 9.98 * quentity;
        break;
    }

    case 4:
    {
        price = 4.49 * quentity;
        break;
    }

    case 5:
    {
        price = 6.87 * quentity;
        break;
    }
    }

    return price;
}

int main()
{
    float sum = 0;
    int a, b;

    while (cin >> a)
    {
        if (a != -1)
        {
            cin >> b;
        }

        for (sum = 0; a != -1;)
        {
            if (b < 0)
            {
                b = 0;
            }

            sum = sum + adding(a, b);

            cin >> a;

            if (a != -1)
            {
                cin >> b;
            }
        }

        cout << fixed << setprecision(2) << sum << endl;
    }

    return 0;
}