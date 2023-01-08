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

        int temp = x / 25;
        if (x % 25 == 0)
        {
            cout << (temp) << endl;
        }
        else
        {
            cout << (temp + 1) << endl;
        }
    }
    return 0;
}