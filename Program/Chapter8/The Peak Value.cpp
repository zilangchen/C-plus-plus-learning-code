#include <iostream>

using namespace std;

int main()
{
    int judge[10];

    while (cin >> judge[0])
    {
        for (int i = 1; i <= 9; i++)
        {
            cin >> judge[i];
        }

        for (int i = 1; i <= 8; i++)
        {
            if (judge[i] < judge[i - 1] && judge[i] < judge[i + 1])
            {
                cout << judge[i];
                cout << " ";
            }

            if (judge[i] > judge[i - 1] && judge[i] > judge[i + 1])
            {
                cout << judge[i];
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}