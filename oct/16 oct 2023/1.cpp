#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int st = 0, ed = 1e9;
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        int flag = -1;
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - mid) < abs(arr[i - 1] - mid))
            {
                if (arr[i] > arr[i - 1])
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                }
                break;
            }
        }
        if (flag == -1)
        {
            cout << mid << endl;
            return;
        }
        else if (flag == 0)
        {
            ed = mid - 1;
        }
        else
        {
            st = mid + 1;
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

    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}