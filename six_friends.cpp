#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int doub = x * 3;
        int trip = y * 2;

        int ans = min(doub, trip);
        cout << ans << endl;
    }
    return 0;
}