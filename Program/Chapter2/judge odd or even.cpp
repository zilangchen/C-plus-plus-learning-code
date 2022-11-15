#include<iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        if(num % 2 != 0)
        cout << "odd" << endl;
    
        if(num % 2 == 0)
        cout << "even" << endl; 
    }

    return 0;
}