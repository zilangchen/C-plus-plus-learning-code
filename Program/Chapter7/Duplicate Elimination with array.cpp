#include <iostream>

using namespace std;

int main()
{
    int judge[10];

    while (cin >> judge[1])
    {
        for (int i = 2; i <= 10; i++)
        {
            cin >> judge[i];
        }

        cout << judge[1];

        for (int i = 2, a = 1; i <= 10; i++)
        {
            for (int j = 1; i >= j + 1; j++)
            {
                if (judge[i] == judge[j])
                {
                    a = 0;
                    break;
                }
            }

            if (a == 1)
            {
                cout << " " << judge[i];
            }
            else
            {
                a = 1;
            }
        }

        cout << endl;
    }

    return 0;
}
