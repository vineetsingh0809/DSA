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

        int dis = x * 100;
        int cloth = y * 10;

        if (dis == cloth)
        {
            cout << "CLOTH" << endl;
        }
        else if (dis < cloth)
        {
            cout << "DISPOSABLE" << endl;
        }
        else
        {
            cout << "CLOTH" << endl;
        }
    }
    return 0;
}