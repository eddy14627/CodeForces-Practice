#include <bits/stdc++.h>
using namespace std;
void solve(unordered_set<long long> st)
{
    int n;
    cin >> n;
    if (st.find(n) != st.end())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
    unordered_set<long long> st;

    for (int k = 2; k <= 1000; k++)
    {
        long long sum = 1 + k + k * k, temp = k * k;
        while (sum <= 1e6)
        {
            st.insert(sum);
            temp *= k;
            sum += temp;
        }
    }
    while (t)
    {
        t--;
        solve(st);
    }
    return 0;
}