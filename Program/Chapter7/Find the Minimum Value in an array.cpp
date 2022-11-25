#include <iostream>

using namespace std;

int main()
{
    int judge[11];

    while (cin >> judge[0])
    {
        for (int i = 1; i <= 9; i++)
        {
            cin >> judge[i];
        }

        int a = judge[0];

        for (int i = 0; i <= 9; i++)
        {
            if (judge[i] <= a)
            {
                a = judge[i];
            }
        }

        cout << a << endl;
    }

    return 0;
}