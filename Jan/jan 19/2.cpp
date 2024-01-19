#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n)), arr(n, vector<int>(n));
    vector<int> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (i == j)
                continue;
            if (v[i] == -1)
                v[i] = mat[i][j];
            else
                v[i] = v[i] & mat[i][j];
            if (v[j] == -1)
                v[j] = mat[i][j];
            else
                v[j] = v[j] & mat[i][j];
        }
    }
    if (n == 1)
        v[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            arr[i][j] = v[i] | v[j];
        }
    }
    if (arr == mat)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
        cout << "No" << endl;
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