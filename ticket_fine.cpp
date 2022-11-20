#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, p, q;
        cin >> x >> p >> q;
        int rem = p - q;

        cout << rem * x << endl;
    }
    return 0;
}