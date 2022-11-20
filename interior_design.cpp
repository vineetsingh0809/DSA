#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int first = x1 + y1;
        int second = x2 + y2;

        int ans = min(first, second);
        cout << ans << endl;
    }
    return 0;
}