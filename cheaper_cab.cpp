#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << "ANY" << endl;
        }
        else if (y > x)
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }
    return 0;
}