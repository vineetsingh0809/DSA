#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int first = a - c;
        int second = b - d;

        if (first < second)
        {
            cout << "First" << endl;
        }
        else if (second < first)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}