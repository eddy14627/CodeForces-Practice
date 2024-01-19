#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    long long pos;
    cin >> pos;
    long long n = str.size(), j = 1, i = 0;
    vector<int> idx(n, -1), mark(n, 1);

    long long st = 0, ed = 1e6, rem = 0, tempSum = 0;
    while (st <= ed)
    {
        long long mid = (st + (ed - st)) / 2;
        long long sum = (long long)(n / 2) * ((long long)n * 2 + (mid - 1));
        if (sum <= pos)
        {
            rem = mid;
            tempSum = sum;
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }

    int id = pos - tempSum;
    int sz = n - rem;

    while (rem)
    {
        if (i >= 0 && j < n && str[i] >= str[j])
        {
            mark[i] = -1;
            i = idx[i];
            rem--;
        }
        else
        {
            idx[j] = i;
            i = j;
            j++;
        }
    }
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        if (mark[i] == 1)
        {
            temp += str[i];
        }
    }

    cout << temp << endl;
    // string res = str, running = "";
    // while (j < n || running.size() != 0)
    // {
    //     if (j < n && str[i] < str[j])
    //     {
    //         running += str[i];
    //         idx[j] = i;
    //         i = j;
    //         j = j + 1;
    //     }
    //     else if (running.size())
    //     {
    //         res = res + running + (j < n ? str.substr(j) : "");
    //         i = idx[i];
    //         running.pop_back();
    //     }
    //     else if (j < n)
    //     {
    //         res += str.substr(j);
    //         i = j;
    //         j = j + 1;
    //     }
    // }
    // cout << res << endl;
    // cout << res[pos - 1];
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