#include <bits/stdc++.h>
using namespace std;

bool bs(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (auto it : nums)
    {
        pq.push(it);
        if (pq.size() > k)
            pq.pop();
    }
    int i = 1;
    while (pq.size())
    {
        if (pq.top() > k + 1 - i)
            break;
        pq.pop();
        int x = pq.top();
        pq.pop();
        x = x + k + 1 - i;
        pq.push(x);
        i++;
    }
    return !pq.size();
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int st = 0, ed = n;
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if (bs(arr, mid))
        {
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }
    // if (st <= n)
    //     cout << st << endl;
    // else
    //     cout << 0 << endl;
    cout << ed << endl;
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