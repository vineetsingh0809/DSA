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

        if (n < x)
        {
            cout << 0 << endl;
        }
        else
        {
            int remain = n - x;
            int ans = remain / 4;
            if (remain % 4 == 0)
            {
                cout << ans << endl;
            }
            else
            {
                cout << (ans + 1) << endl;
            }
        }
    }
    return 0;
}