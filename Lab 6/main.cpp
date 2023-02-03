#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
   int a;
   cout << "Введите чило a" << endl;
   cin >> a;
   //switch (a);
  // {
  // case 1
   if (( a<0 ) && ((a%2) ==0))
    cout << "Отрицательное чётное";
   // break;
   //case 2
  else if ((a<0) && ((a%2) !=0))
        cout << "Отрицательное нечётное";
    //break;
   //case 3
   else if ((a>0) && ((a%2) ==0))
       cout << "Положительное чётное";
   // break;
  // case 4
  else if ((a>0) && ((a%2) !=0))
        cout << "Положительное нечётное";
   // break;
  // default:
  else
    cout << "нулевое число";
  // }
    return 0;
}
