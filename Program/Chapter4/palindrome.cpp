 #include<iostream>

 using namespace std;

 int main()
 {
    int a,a1,a2,a3,a4,a5;
    while(cin >> a)
    {
    a5 = a % 10;
    a4 = (a - a5)/10 % 10;
    a3 = (a - a4 *10 - a5)/100 % 10;
    a2 = (a - a3 * 100 - a4 *10 - a5)/1000 % 10;
    a1 = (a - a2 * 1000 - a3 * 100 - a4 *10 - a5)/10000 % 10;

    if(a1 == a5 && a2 == a4)
    cout << "true" << endl;
    else
    cout << "false" << endl;
    }
    return 0;
 }

