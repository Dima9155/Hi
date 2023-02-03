#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
 {
     double a1,a2,a3,b1,b2,b3,s,h;
     cout << "Input a1,a2,a3,b1,b2,s :" << endl;
     cin >> a1 >> a2 >> a3 >> b1 >> b2 >> s;
     b3 = 100 - b1- b2;
     h = ((s*b1/100)*((100-a1)/100)) + ((s*b2/100)*((100-a2)/100)) + ((s*b3/100)*((100-a3)/100));
     cout << "S= " << h << endl;
     return 0;
 }
