#include <bits/stdc++.h>
using namespace std;
bool checkDivisibility(string temp, int b)
{
    int num = 0, n = temp.size();
    int i = 0;
    while (i < n)
    {
        while (i < n)
        {
            num = num * 10 + temp[i] - '0';
            i++;
            if (num >= b)
                break;
        }
        int var = num / b;
        num = num - b * var;
    }
    return num == 0;
}

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    string num = to_string(a);
    for (int j = 0; j <= 9; j++)
    {
        string temp = num + to_string(j);
        if (checkDivisibility(temp, b))
        {
            num = temp;
            for (int i = 0; i < n - 1; i++)
            {
                num += "0";
            }
            cout << num << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}