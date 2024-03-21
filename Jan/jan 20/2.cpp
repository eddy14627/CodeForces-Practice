#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());
    int i = n - 1;
    long long ans = 0;
    while (i >= 0)
    {
        while (i >= 0)
        {
            int ll = lower_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();
            cout << "lower_limit : " << ll << endl;
            cout << "lower_limit_val : " << arr[ll] << endl;
            cout << "ll : " << ll << " i : " << i << endl;
            if (ll == i)
            {
                i = ll - 1;
                cout << "break" << endl;
                break;
            }
            int t = i - ll - 1;
            ans = ans + (ll * (t + 1));
            cout << " temp ans : " << ans << endl;
            int temp = 0;
            for (int j = 1; j <= t; j++)
            {
                temp += (j * (j + 1));
            }
            ans = temp / 2;
            i = ll - 1;
        }
    }
    cout << "ans : " << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        t--;
        solve();
    }
    return 0;
}