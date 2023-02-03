#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double a,b,x,s,e,S;
    cout << "Input: x,e" << endl;
    cin >> x >> e;
    S=0;
    n=1;
    a = pow(x,(n+1));
    b = (2*n - 1);
    s = a/b;
    while(fabs(s) > e)
    {
        n++;
        a *= x;
        b *= (2*n-1)*(2*n-2);
        s = a/b;
        S +=s;
    }
    cout << S;
    return 0;
}
2
