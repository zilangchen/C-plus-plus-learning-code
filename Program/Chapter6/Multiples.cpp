#include <iostream>

using namespace std;

inline const string muitiCheck(int a, int b)
{
    return (b % a == 0) ? "true" : "false";
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << muitiCheck(a, b) << endl;
    }
    return 0;
}
