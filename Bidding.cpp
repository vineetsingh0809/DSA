#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            cout << "Alice" << endl;
        }
        else if (b > a && b > c)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int ans = max(a, max(b, c));
//         if (ans == a)
//         {
//             cout << "Alice" << endl;
//         }
//         else if (ans == b)
//         {
//             cout << "Bob" << endl;
//         }
//         else
//         {
//             cout << "Charlie" << endl;
//         }
//         }
//     return 0;
// }