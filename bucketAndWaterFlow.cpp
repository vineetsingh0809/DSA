#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        int addedWater = y * z;
        int totalWater = w + addedWater;

        if (totalWater == x)
        {
            cout << "FILLED" << endl;
        }
        else if (totalWater < x)
        {
            cout << "UNFILLED" << endl;
        }
        else
        {
            cout << "OVERFLOW" << endl;
        }
    }
    return 0;
}