#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;

    int judge[10];

    while (cin >> judge[0])
    {
        for (int i = 1; i <= 9; i++)
        {
            cin >> judge[i];
        }

        for (int i = 0, a = 1; i <= 9; i++)
        {
            for (int j = 0; i >= j + 1; j++)
            {
                if (judge[i] == judge[j])
                {
                    a = 0;
                    break;
                }
            }

            if (a == 1)
            {
                num.push_back(judge[i]);
            }
            else
            {
                a = 1;
            }
        }

        cout << num[0];

        for (int i = 1; i < num.size(); i++)
        {
            cout << " " << num[i];
        }

        cout << endl;
        num.clear();
    }

    return 0;
}