#include <iostream>

using namespace std;

int main()
{
    int a[15],n,i,k = 0,sum;
    cout << "Select array size(up to 15):";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    sum = 0; k = 0;
    for (i = 0; i < n; i++)
    {

        if(a[i] < 0)
            k++;
        else if(a[i] >= 0 && k == 1)
            sum += a[i];
        if (k == 2)
            break;

    }
    if (k == 1)
        sum = 0;
    cout << "Answer: " << sum;
    return 0;
}
