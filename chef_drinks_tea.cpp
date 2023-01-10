#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int temp = x / y;

        if (y > x)
        {
            cout << (z * 1) << endl;
        }
        else if (x % y == 0)
        {
            cout << (temp * z) << endl;
        }
        else
        {
            cout << ((temp + 1) * z) << endl;
        }
    }
    return 0;
}