#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, t;
    string str = "";
    cin >> n >> t >> str;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                swap(str[j], str[j + 1]);
                j++;
            }
        }
    }
    cout << str << endl;
}

int main()
{
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    solve();
    return 0;
}