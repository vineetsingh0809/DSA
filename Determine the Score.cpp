#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;

        int num = x / 10;
        cout << (num * n) << endl;
    }
    return 0;
}