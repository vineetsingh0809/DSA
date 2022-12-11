#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int full = 3 * x;
        int ans = n / full;

        if (n < x)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}