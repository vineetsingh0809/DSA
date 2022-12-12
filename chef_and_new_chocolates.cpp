#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, x, y;
        cin >> c >> x >> y;

        int ans = (c - x) * y;

        cout << ans << endl;
    }
    return 0;
}