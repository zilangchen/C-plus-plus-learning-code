#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a , b ;
    int c , d , e;
    
    while (cin >> a >> b >> c >> d)
    {

    e = c * d;
    
    if(e <= 0)
    e = 0;
    if(d <= 0)
    d = 0;
    if(c <= 0)
    c = 0;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    }
    return 0; 
}