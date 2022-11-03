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

        int val = y / z;

        if (y % z == 0)
        {
            cout << (x * val) << endl;
        }
        else if (y % z != 0)
        {
            cout << x * (val + 1) << endl;
        }
    }
    return 0;
}