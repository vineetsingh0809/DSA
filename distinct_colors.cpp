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
        int a[n];
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max = a[0];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= max)
            {
                max = a[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}