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

        int price = 10 * x;

        if (x <= 300)
        {
            cout << 3000 << endl;
        }
        else
        {
            cout << price << endl;
        }
    }
    return 0;
}