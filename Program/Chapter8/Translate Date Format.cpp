#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    while (cin >> text)
    {
        char a = text[0];
        char b = text[1];
        int num = b;

        if (a == 48)
        {
            switch (num)
            {
            case 49:
            {
                cout << "January";
                break;
            }

            case 50:
            {
                cout << "February";
                break;
            }

            case 51:
            {
                cout << "March";
                break;
            }

            case 52:
            {
                cout << "April";
                break;
            }

            case 53:
            {
                cout << "May";
                break;
            }

            case 54:
            {
                cout << "June";
                break;
            }

            case 55:
            {
                cout << "July";
                break;
            }

            case 56:
            {
                cout << "August";
                break;
            }

            case 57:
            {
                cout << "September";
                break;
            }
            }
        }

        if (a == 49)
        {
            if (b == 48)
            {
                cout << "October";
            }

            if (b == 49)
            {
                cout << "November";
            }

            if (b == 50)
            {
                cout << "December";
            }
        }

        cout << " " << text[3] << text[4] << "," << text[6] << text[7] << text[8] << text[9] << endl;
    }
    return 0;
}