#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int res = n - a;

    cout << res << " " << (res - b) << endl;
    return 0;
}