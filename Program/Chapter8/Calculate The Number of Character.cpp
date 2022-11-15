#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    char character;
    char thecharacter;

    while (cin >> text)
    {
        cin >> character;

        int a = 0;

        for (int i = 0; i < text.size(); i++)
        {
            thecharacter = text[i];

            if (thecharacter == character)
            {
                a += 1;
            }
        }
        cout << a << endl;

        a = 0;
    }
    return 0;
}