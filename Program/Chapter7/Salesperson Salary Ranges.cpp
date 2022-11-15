#include <iostream>

using namespace std;

float calculate(int num)
{
    double salary;
    salary = 200 + 0.09 * num;
    return salary;
}

int main()
{
    int number, sit;
    int a, b, c, d, e, f, g, h, i;

    while (cin >> number)
    {
        for (a = b = c = d = e = f = g = h = i = 0; number > 0;)
        {
            double judge;
            judge = calculate(number) - 200;

            for (sit = 0; judge > 0;)
            {
                judge = judge - 100;
                sit += 1;
            }

            if (sit >= 9)
            {
                sit = 9;
            }

            switch (sit)
            {
            case 1:
            {
                a += 1;
                break;
            }

            case 2:
            {
                b += 1;
                break;
            }

            case 3:
            {
                c += 1;
                break;
            }

            case 4:
            {
                d += 1;
                break;
            }

            case 5:
            {
                e += 1;
                break;
            }

            case 6:
            {
                f += 1;
                break;
            }

            case 7:
            {
                g += 1;
                break;
            }

            case 8:
            {
                h += 1;
                break;
            }

            case 9:
            {
                i += 1;
                break;
            }
            }
            cin >> number;
        }
        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << endl;
    }
}
