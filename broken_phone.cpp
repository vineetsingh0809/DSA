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

        if (x < y)
        {
            cout << "REPAIR" << endl;
        }
        else if (y < x)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}