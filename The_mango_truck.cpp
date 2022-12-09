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

        int ans = (z - y) / x;
        cout << ans << endl;
    }
    return 0;
}