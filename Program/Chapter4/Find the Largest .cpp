#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j,max;
    while(cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j)
    {
    max = a;

    if(max <= b)
    max = b;

    if(max <= c)
    max = c;

    if(max <= d)
    max = d;

    if(max <= e)
    max = e;

    if(max <= f)
    max = f;

    if(max <= g)
    max = g;

    if(max <= h)
    max = h;

    if(max <= i)
    max = i;

    if(max <= j)
    max = j;

    cout << max << endl;
    }
    return 0;
}