#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> task(m);
    for (int i = 0; i < m; i++)
    {
        cin >> task[i];
    }
    long long time = 0;
    int ptr = 1;
    for (int i = 0; i < m; i++)
    {
        if (task[i] >= ptr)
            time = time + task[i] - ptr;
        else
        {
            time = time + n - ptr + task[i];
        }
        while (i < m - 1 && task[i] == task[i + 1])
        {
            i++;
        }
        ptr = task[i];
    }
    cout << time << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}