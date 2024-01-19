#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    map<char, int> mp1, mp2;
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < n; i++)
    {
        mp1[str1[i]]++;
        mp2[str2[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp1[str1[i]] != mp2[str1[i]])
        {
            cout << "No" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if ((str1[i] != str2[i]) && (i < k) && (i + k >= n))
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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