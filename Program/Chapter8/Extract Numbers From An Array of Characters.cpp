#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    while (cin >> text)
    {
        char a;
        int c = 0;
        int d = 0;

        for (long long unsigned int i = 0; i < text.size(); i++)
        {
            a = text[i];

            for (int b = 49; b <= 57; b++)
            {
                if (a == b)
                {
                    c = 1;
                    break;
                }
                else
                {
                    c = 0;
                }
            }

            if (c == 1)
            {
                cout << a - 48;
                d = 1;
            }

            if (c == 0 && d == 1)
            {
                cout << " ";
                d = 0;
            }
        }
        cout << endl;
    }
    return 0;
}