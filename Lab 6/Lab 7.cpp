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
   if (a==0)
    cout << "Нулевое число" << endl;
   if (( a<0 ) && (a%2) ==0)
    cout << "Отрицательное чётное" << endl;
   if ((a<0) && (a%2) !=0)
    cout << "Отрицательное не чётное" << endl;
   if ((a>0) && (a%2) ==0)
    cout << "Положительное чётное" << endl;
   if ((a>0) && (a%2) !=0)
    cout << "Положительное не чётное" << endl;
    return 0;
}
