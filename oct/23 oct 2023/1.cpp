#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    unordered_map<char, int> mp;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    int rem = n - k;
    for (auto [a, b] : mp)
    {
        int temp = (b / 2) * 2;
        rem -= temp;
    }
    if (rem > 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
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