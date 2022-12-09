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

        int tot = (z * x) - (z * y);
        cout << (w + tot) << endl;
    }
    return 0;
}