#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long r, c;
        cin >> r >> c;
        if (r > c)
        {
            if (r % 2 == 0)
            {
                cout << (r * r) - c + 1 << endl;
            }
            else
            {
                cout << ((r - 1) * (r - 1)) + c << endl;
            }
        }
        else
        {
            if (c % 2 == 0)
            {
                cout << (c - 1) * (c - 1) + r << endl;
            }
            else
            {
                cout << (c * c) - r + 1 << endl;
            }
        }
    }
    return 0;
}