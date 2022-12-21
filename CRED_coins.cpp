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

        int mul = x * y;
        cout << (mul / 100) << endl;
    }
    return 0;
}