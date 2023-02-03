#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()

     SetConsoleOutputCP(1251);
     double x,y,z,r,f,g,h,j,q,w,e,t;
     cout << "Введите x,y,z:" << endl;
     cin >> x >> y >> z;
     q = y + 2;
     w = pow(x,q);
     e = pow(x,2) + w;
     t = M_PI * e;
     f = z - pow(x,2) + y ;
     g = fabs(f);
     h = pow(g,2);
     j = acos(h);
     r = sqrt(t) * pow(j,2);
     cout << "Ответ : " << r << endl;
     return 0;

