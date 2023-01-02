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

        int total_income = n * 50;
        int sugarcane = (20 * total_income) / 100;
        int mint = (20 * total_income) / 100;
        int rent = (30 * total_income) / 100;
        int total_cost = sugarcane + mint + rent;

        cout << (total_income - total_cost) << endl;
    }
    return 0;
}