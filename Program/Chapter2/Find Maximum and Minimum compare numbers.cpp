#include<iostream>

using namespace std;

int main()
{
   int a,b,c,max,min;
   cin >> a >> b >> c;
   
   if(a >= b)
   max = a ,min = b;
   else
   max = b , min = a;
   
   if(max <= c)
   max = c;

   if(c <= min)
   min = c;
   
   cout << max << endl;
   cout << min;


   return 0;
}