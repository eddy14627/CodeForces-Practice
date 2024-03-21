#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> st;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        st.push_back(x);
    }
    sort(st.begin(), st.end());
    int diff = 1;
    for (int i = 1; i < n; i++)
    {
        if (st[i] != st[i - 1])
            diff++;
    }
    cout << diff << endl;
    return 0;
}