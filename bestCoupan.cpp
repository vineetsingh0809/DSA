#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int num = x / 10;

        if (x <= 1000)
        {
            cout << 100 << endl;
        }
        else
        {
            cout << num << endl;
        }
    }
    return 0;
}