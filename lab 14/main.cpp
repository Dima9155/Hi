#include <iostream>
#include <math.h>

using namespace std;

int sinX (int i, *A, n, j, m, *B)
{
    cout << "Input n:";
    cin >> n;
    A = new int [n];
    for ( i = 0; i < n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> A[i];
    }
    int S=0;
    for ( i = 0; i < n; i++)
    {
    S += sin(A[i]);
    }
      //   return sinX;
    cout << "Input n:";
    cin >> m;
    B = new int [m];
    for ( j = 0; j < m; j++)
    {
        cout << "a[" << j << "]= ";
        cin >> B[j];
    }
    int s=0;
    for ( j = 0; j < n; j++)
    {
    s += sin(B[j]);
    }


 }
int main()
{
 int i, *A, n, *B, j, m, D;
 void sinX()
   D = (S-s)/2

    return 0;
}
