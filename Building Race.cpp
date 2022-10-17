#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if ((float)a / x < (float)b / y)
        {
            cout << "Chef" << endl;
        }
        else if ((float)a / x > (float)b / y)
        {
            cout << "Chefina" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }
    return 0;
}