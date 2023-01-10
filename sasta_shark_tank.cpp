#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int first = 10 * a;
        int second = 5 * b;

        if (first > second)
        {
            cout << "FIRST" << endl;
        }
        else if (first == second)
        {
            cout << "ANY" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }
    return 0;
}