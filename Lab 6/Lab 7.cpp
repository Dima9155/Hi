#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
   int a;
   cout << "������� ���� a" << endl;
   cin >> a;
   if (a==0)
    cout << "������� �����" << endl;
   if (( a<0 ) && (a%2) ==0)
    cout << "������������� ������" << endl;
   if ((a<0) && (a%2) !=0)
    cout << "������������� �� ������" << endl;
   if ((a>0) && (a%2) ==0)
    cout << "������������� ������" << endl;
   if ((a>0) && (a%2) !=0)
    cout << "������������� �� ������" << endl;
    return 0;
}
