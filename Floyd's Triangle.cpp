#include <bits/stdc++.h>
using namespace std;
//Floyd's triangle in C++
/*1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15*/
int main()
{
    int n, t = 0;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ++t << " ";
        }
        cout << endl;
    }

    return 0;
}
