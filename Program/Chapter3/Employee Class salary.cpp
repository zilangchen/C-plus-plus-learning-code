#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,c,d;
    int e,f,g,h,i,j;

    while(cin >> a >> b >> e >> c >> d >> f)
    {
        if(e <= 0)
        e = 0;

        if(f <= 0)
        f = 0;

        g = 12 * e;
        h = 12 * f;

        i = 1.1 * g;
        j = 1.1 * h;

        cout << a << " " << b << " " << g << endl;
        cout << c << " " << d << " " << h << endl;
        cout << a << " " << b << " " << i << endl;
        cout << c << " " << d << " " << j << endl;

    }

    return 0;
}