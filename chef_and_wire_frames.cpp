#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        int peri = 2 * (n + m);
        cout << (peri * x) << endl;
    }
    return 0;
}