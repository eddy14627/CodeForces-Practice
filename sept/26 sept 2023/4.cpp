#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr = {1, 4};
    cout << 1 << " " << 4 << " ";
    for (long long i = 2; i < n; i++)
    {
        long long num = arr.back() + 1;
        while ((num + arr.back()) % 3 == 0 || ((num) % (arr[arr.size() - 1] + arr[arr.size() - 2]) == 0))
        {
            num++;
        }
        arr.push_back(num);
        cout << num << " ";
    }
    cout << endl;
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