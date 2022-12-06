#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int minimum = min(x, y);
        if (x == y)
        {
            cout << x << endl;
        }
        else
        {
            cout << minimum << endl;
        }
    }
    return 0;
}