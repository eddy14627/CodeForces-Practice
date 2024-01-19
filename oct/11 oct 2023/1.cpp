#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    long long pos;
    cin >> pos;
    int n = str.size();
    int st = 0, ed = n;
    long long finalSum = 0, rem = 0;
    while (st <= ed)
    {
        int mid = (st + (ed - st) / 2);
        long long sum = ((long long)(mid) * (((long long)2 * n) - (mid - 1))) / 2;
        if (pos > sum)
        {
            finalSum = sum;
            rem = mid;
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }
    pos = pos - finalSum;
    vector<int> idx(n, -1), mark(n, 0);
    int i = 0, j = 1;
    string ans = rem ? "" : str;
    while (rem)
    {
        if (ans.size() == 0)
        {
            ans += str[i++];
        }
        else
        {
            if (str[i] > ans[ans.size() - 1])
            {
                ans += str[i++];
            }
            else
            {
                ans.pop_back();
                rem--;
            }
        }
    }
    while (rem--)
    {
        ans.pop_back();
    }
    cout << ans[pos - 1];
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