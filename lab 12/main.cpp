#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int **A, *B, i, j, n, m;
    cout << "Input m & n: ";
    cin >> m >> n;
    A = new int *[m];
    for ( i = 0; i < m; i++)
        A[i] = new int [n];
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
    {
       A[i][j] = rand() % 20 - 2;
    }
    cout << "Matrix A:" << endl;
    for ( i=0; i < m; i++ )
    {
        for (j = 0; j < n; j++)
        {
        cout << A[i][j] << "\t";

        }
        cout << endl;
    }
    B = new int[n];
    cout << "vektor B:" << endl;
        for (i= 0; i < m; i++)
        {
             B[i] = A[i][0];
            for (j = 1; j < n; j++)
                if (A[i][j] < B[i])
                B[i] = A[i][j];
                if (B[i] > 0)
                    B[i] = 0;

            cout << "min znach in " << i + 1 << "stroke =" << B[i] << endl;
        }

    return 0;
}
