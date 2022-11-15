#include<iostream>
#include<iomanip>
using namespace std;

class Calculate
{
public:

    float addinghour(float workinghour)
    {
        addinghours = workinghour - 40;
        return addinghours;
    }

    float addingsalary(float rate)
    {
        addingsalarys = addinghours * rate;
        return addingsalarys;
    }
    
    float showaddingsalary ()
    {
        return addingsalarys;
    }
private:
    float addingsalarys,addinghours;

};

int main()
{
    Calculate calculate;
    float workinghours1,rates1,totalsalary1;
    float workinghours2,rates2,totalsalary2;
    float workinghours3,rates3,totalsalary3;
    float workinghours4,rates4,totalsalary4;
    

    while(cin >> workinghours1 >> rates1 >> workinghours2 >> rates2 >> workinghours3 >> rates3 >> workinghours4 >> rates4)
    {
        calculate.addinghour(workinghours1);
        calculate.addingsalary(rates1);
        totalsalary1 = 40 * rates1 + calculate.showaddingsalary() * 1.5;
        if(workinghours1 <= 40)
        totalsalary1 = workinghours1 * rates1;
        cout << fixed << setprecision(2) << totalsalary1 << endl;
        
        calculate.addinghour(workinghours2);
        calculate.addingsalary(rates2);
        totalsalary2 = 40 * rates2 + calculate.showaddingsalary() * 1.5;
        if(workinghours2 <= 40)
        totalsalary2 = workinghours2 * rates2;
        cout << fixed << setprecision(2) << totalsalary2 << endl;
        
        calculate.addinghour(workinghours3);
        calculate.addingsalary(rates3);
        totalsalary3 = 40 * rates3 + calculate.showaddingsalary() * 1.5;
        if(workinghours3 <= 40)
        totalsalary3 = workinghours3 * rates3;
        cout << fixed << setprecision(2) << totalsalary3 << endl;
        
        calculate.addinghour(workinghours4);
        calculate.addingsalary(rates4);
        totalsalary4 = 40 * rates4 + calculate.showaddingsalary() * 1.5;
        if(workinghours4 <= 40)
        totalsalary4 = workinghours4 * rates4;
        cout << fixed << setprecision(2) << totalsalary4 << endl;
    }

    return 0;
}