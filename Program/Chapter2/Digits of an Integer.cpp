#include<iostream>

using namespace std;

int main()
{
    int m,a,b,c,d,e;
    
    cin >> m;
    e = m % 10;
    d = (m - e) / 10 % 10 ;
    c = (m - d * 10 - e) / 100 % 10 ;
    b = (m - 100 * c - 10 * d - e) / 1000 % 10 ;
    a = (m - 1000 * b - 100 * c - 10 * d - e) / 10000 % 10 ;
    cout << a << "   " << b << "   " << c << "   " << d << "   " << e << endl;

return 0;
}