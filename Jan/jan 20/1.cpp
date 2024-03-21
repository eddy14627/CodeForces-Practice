#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;

    vector<int> ans;
    bool flag = false;
    bool flag1 = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            if (arr[i + 1] > arr[i])
                flag = true;
            else if (arr[i + 1] < arr[i])
                flag = false;
            else
                flag1 = true;
            ans.push_back(arr[i]);
        }
        else if (arr[i] != arr[i + 1])
        {
            if (flag1)
            {
                flag1 = false;
                flag = arr[i + 1] > arr[i];
            }
            if (flag && arr[i + 1] < arr[i])
            {
                flag = false;
                ans.push_back(arr[i]);
            }
            else if (!flag && arr[i + 1] > arr[i])
            {
                flag = true;
                ans.push_back(arr[i]);
            }
        }
    }

    if (ans.size() == 0 || ans.back() != arr[n - 1])
        ans.push_back(arr[n - 1]);

    cout << ans.size() << endl;
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
