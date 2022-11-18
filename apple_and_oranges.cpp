#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int a, b;
    cin >> a >> b;

    int sum = a + b;

    if (x >= sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}