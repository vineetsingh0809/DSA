#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int diff = abs(x - y);

        int ans = (diff % k) ? (diff / k + 1) : (diff / k);
        cout << ans << endl;
    }
    return 0;
}