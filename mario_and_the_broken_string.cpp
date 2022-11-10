#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str;
        string a, b;
        cin >> str;

        for (int i = 0; i < n/2; i++)
        {
            a += str[i];
            b += str[n / 2 + i];
        }
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}