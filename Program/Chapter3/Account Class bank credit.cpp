#include<iostream>

using namespace std;

int main()
{
    int a,b,c,credit1,credit2;
    
    while(cin >> a >>b >> c)
    {
    cout << a << endl;
    credit1 = a + b;
    cout << credit1 << endl;
    credit2 = credit1 - c;
    cout << credit2 << endl;
    }
    return 0;
}