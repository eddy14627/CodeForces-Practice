#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    // vector<int> arr;
    int idx = 2;
    for (; idx <= n / 2; idx++)
    {
        if (n % idx)
            break;
    }
    idx--;
    string str = "a";
    for (int i = 1; i <= idx; i++)
    {
        char ch = 'a' + i;
        str = str + ch;
    }
    string ans = "";
    for (int i = 0; i <= (n / idx); i++)
    {
        ans += str;
    }
    cout << ans.substr(0, n) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}