#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a[3][4], i, j;

    for (i = 0; i < 3; i++)
      for (j = 0; j < 4; j++)
    {
        cout << " a[" << i << "][" << j << "] =";
        cin >> a[i][j];
    }

    cout << "Matrix A:" << endl;
    for ( i=0; i < 3; i++ )
    {
        for (j = 0; j < 4; j++)
        cout << a[i][j] << "\t";
        cout << endl;
    }
    int w ;
    for (j = 0; j < 4; j++)
    {
        w=0;
         for (i = 0; i < 3; i++)
        {
            if (a[i][j] >= 0)
             {
               w++;

             }
        }
        if(w==3)
        break;
    }
    cout << j << " Number "<< endl;
    return 0;
}
