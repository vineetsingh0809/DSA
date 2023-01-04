#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int marks;
        cin >> marks;
        int temp = marks / 3;
        int temp2 = marks % 3;
        if (temp2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (temp + 1) * 3-marks << endl;
        }
    }
    return 0;
}