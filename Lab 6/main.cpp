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
   //switch (a);
  // {
  // case 1
   if (( a<0 ) && ((a%2) ==0))
    cout << "������������� ������";
   // break;
   //case 2
  else if ((a<0) && ((a%2) !=0))
        cout << "������������� ��������";
    //break;
   //case 3
   else if ((a>0) && ((a%2) ==0))
       cout << "������������� ������";
   // break;
  // case 4
  else if ((a>0) && ((a%2) !=0))
        cout << "������������� ��������";
   // break;
  // default:
  else
    cout << "������� �����";
  // }
    return 0;
}
