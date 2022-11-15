#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,d;

    while(cin >> a >> b)
    {
        cout << "(" << a << "," << b << ")" << endl;
        
        if(a <= 0)
        a = -a;

        if(b <= 0)
        b = -b;

        c = a * a + b * b;
        d = sqrt(c);
        
        cout << d;

    }

    return 0;
}