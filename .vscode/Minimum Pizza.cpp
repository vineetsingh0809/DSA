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

        int ans = n * x;

        if (ans % 4 != 0)
        {
            cout << (ans / 4) + 1 << endl;
        }
        else
        {
            cout << (ans / 4) << endl;
        }
    }
    return 0;
}