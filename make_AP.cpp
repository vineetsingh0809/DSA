#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int c = (a + b) / 2;

        if ((b - c) == (c - a))
        {
            cout << c << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
