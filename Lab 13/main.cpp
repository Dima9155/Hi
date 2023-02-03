#include <iostream>

using namespace std;

int rn (int num)
{
    int ret = 0;
    while (num)
    {
        ret = ret * 10 + num % 10;
        num /= 10;
    }
    return ret;
}
bool is_pal (const int num)
 {
     return num == rn(num);

 }
int main()
{
    const int S (5);
    int arr[S] = {12321, 54654, 45654, 4554, 2136};
    int i,c = 0;
    cout << "Array: " << endl;
    for (i = 0; i < S; i++)
    {
    cout << arr[i] << "\t";
    if (is_pal (arr[i]))
        ++c;
    }
    cout << "\n" << c << " palind." << endl;

    return 0;
}
