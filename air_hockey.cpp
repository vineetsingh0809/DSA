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

        int max_num = max(a, b);
        cout << (7 - max_num) << endl;
    }
    return 0;
}