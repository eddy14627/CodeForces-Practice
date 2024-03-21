#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    for (int i = 0, j = 0; i < n && j < m;)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            i++;
            j++;
            cnt++;
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << cnt << endl;
    return 0;
}