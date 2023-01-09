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
        int temp, ans = 0;
        while (n)
        {
            temp = n % 10;
            ans = ans * 10 + temp;
            n = n / 10;
        }
        cout << ans << endl;
    }
    return 0;
}