#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    double x,P;
    cin >> x ;
    P = 1;
    for (i = 1; i <= 10; i++ )
      P *= (x + i)/i;
    cout << P << endl;
    return 0;
}
