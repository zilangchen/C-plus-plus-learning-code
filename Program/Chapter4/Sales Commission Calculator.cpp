#include<iostream>
#include<iomanip>
using namespace std;

class Calculate
{
public:

    int addingbonus(int sell)
    {
        bonus = 0.09 * sell;
        return bonus;
    }

    int showbonus()
    {
        return bonus;
    }

private: 
    int bonus;
};



int main()
{
    Calculate calculate1;
    Calculate calculate2;
    
    int sell1,sell2;
    float salary1,salary2;
    while(cin >> sell1 >> sell2)
    {
    calculate1.addingbonus(sell1);
    calculate2.addingbonus(sell2);

    salary1 = calculate1.showbonus() + 200;
    salary2 = calculate2.showbonus() + 200;


    cout << fixed << setprecision(2) << salary1 << endl;
    cout << fixed << setprecision(2) << salary2 << endl;
    }
    return 0;
}
