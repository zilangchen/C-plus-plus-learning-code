#include <iostream>

using namespace std;

int main()
{
    int times, a, b, c, d;
    while (cin >> times)
    {

        if (times > 20)
        {
            times = 0;
        }

        a = times;
        b = times;
        c = times;
        d = times;

        while (a > 0)
        {
            a = a - 1;
            cout << "*";
        }

        if (times > 1)
        {
            cout << endl;
        }

        while (b > 2)
        {
            cout << "*";

            while (c > 2)
            {
                cout << " ";
                c = c - 1;
            }

            if (c = 2)
            {
                c = times;
            }

            cout << "*";
            cout << endl;
            b = b - 1;
        }

        if (times > 1)
        {
            while (d > 0)
            {
                d = d - 1;
                cout << "*";
            }
        }

        cout << endl
             << endl;
    }

    return 0;
}

/*#include <iostream>

using namespace std;

int main()
{
    int times, a, b, c, d;
    int num1, num2, num3;

    while (cin >> num1 >> num2 >> num3)
    {
        times = num1;

        if (times > 20)
        {
            times = -1;
        }

        a = times;
        b = times;
        c = times;
        d = times;

        while (a > 0)
        {
            a = a - 1;
            cout << "*";
        }

        if (times > -1)
        {
            cout << endl;
        }

        while (b > 2)
        {
            cout << "*";

            while (c > 2)
            {
                cout << " ";
                c = c - 1;
            }

            if (c = 2)
            {
                c = times;
            }

            cout << "*";
            cout << endl;
            b = b - 1;
        }

        if (times > 1)
        {
            while (d > 0)
            {
                d = d - 1;
                cout << "*";
            }
        }

        cout << endl;
        if (times > -1 && times != 1)
        {
            cout << endl;
        }

        //������Ϊû��������ô�򵥵��ظ����Σ��ͼ򵥵�ֱ�ӰѴ��븴�������Σ�QAQ

        times = num2;

        if (times > 20)
        {
            times = -1;
        }

        a = times;
        b = times;
        c = times;
        d = times;

        while (a > 0)
        {
            a = a - 1;
            cout << "*";
        }

        if (times > -1)
        {
            cout << endl;
        }

        while (b > 2)
        {
            cout << "*";

            while (c > 2)
            {
                cout << " ";
                c = c - 1;
            }

            if (c = 2)
            {
                c = times;
            }

            cout << "*";
            cout << endl;
            b = b - 1;
        }

        if (times > 1)
        {
            while (d > 0)
            {
                d = d - 1;
                cout << "*";
            }
        }

        cout << endl;
        if (times > -1 && times != 1)
        {
            cout << endl;
        }

        //�˴�Ϊ�������ظ�

        times = num3;

        if (times > 20)
        {
            times = -1;
        }

        a = times;
        b = times;
        c = times;
        d = times;

        while (a > 0)
        {
            a = a - 1;
            cout << "*";
        }

        if (times > -1)
        {
            cout << endl;
        }

        while (b > 2)
        {
            cout << "*";

            while (c > 2)
            {
                cout << " ";
                c = c - 1;
            }

            if (c = 2)
            {
                c = times;
            }

            cout << "*";
            cout << endl;
            b = b - 1;
        }

        if (times > 1)
        {
            while (d > 0)
            {
                d = d - 1;
                cout << "*";
            }
        }

        cout << endl;
        if (times > -1 && times != 1)
        {
            cout << endl;
        }
    }

    return 0;
}*/