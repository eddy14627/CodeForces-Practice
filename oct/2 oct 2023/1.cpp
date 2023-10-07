#include <bits/stdc++.h>
using namespace std;
bool fun(vector<long long> &arr, int passVal)
{
    int n = arr.size(), cnt = 0, w = -1;
    for (int i = 0; i < n; i++)
    {
        if (w == -1 || abs(w - arr[i]) > passVal)
        {
            w = arr[i] + passVal;
            cnt++;
        }
    }
    return cnt <= 3;
}
void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());
    int st = 0, ed = 1e9;
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if (fun(arr, mid))
            ed = mid - 1;
        else
            st = mid + 1;
    }
    cout << st << "\n";
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