#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 double a,b,h,f,x;
 cout << "a=" ;
 cin >> a ;
 cout << "b=" ;
 cin >> b ;
 cout << "h=" ;
 cin >> h ;
 for (double x = a; x <= b; x += h )
 {
     if (x <= -1 )
        f = -x;
     else if ( x <= 1 )
        f = pow(x,3);
     else
        f = exp( 1-x );
     cout << "\n x=" << x << "\tf(x)=" << f << endl;
 }
 return 0;
}
