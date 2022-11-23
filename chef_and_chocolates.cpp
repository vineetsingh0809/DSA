#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int num = (x * 5) + (y * 10);
        cout << (num / z) << endl;
    }
    return 0;
}