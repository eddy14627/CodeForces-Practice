#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long N;
    cin >> N;
    vector<long long> lp(N + 1);
    vector<long long> pr;

    for (long long i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
        }
        for (long long j = 0; i * pr[j] <= N; ++j)
        {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i])
            {
                break;
            }
        }
    }
    vector<pair<long long, long long>> primeAndPower;
    long long sumOfPower = 0;
    for (long long i = 0; i < pr.size(); i++)
    {
        if (N % pr[i] == 0)
        {
            long long cnt = 0;
            while (N % pr[i] == 0)
            {
                cnt++;
                N /= pr[i];
            }
            sumOfPower += cnt;
            primeAndPower.push_back({pr[i], cnt});
        }
        if (primeAndPower.size() > 3)
        {
            cout << "NO" << endl;
            return;
        }
    }
    long long sz = primeAndPower.size();
    if (sumOfPower < 3)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        if (sz == 1)
        {
            if (sumOfPower < 6)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                long long ele = primeAndPower[0].first;
                long long x1 = ele;
                long long x2 = pow(ele, 2);
                long long x3 = pow(ele, sumOfPower - 3);
                cout << x1 << " " << x2 << " " << x3 << endl;
            }
        }
        else if (sz == 3)
        {
            cout << "YES" << endl;
            long long x1 = pow(primeAndPower[0].first, primeAndPower[0].second);
            long long x2 = pow(primeAndPower[1].first, primeAndPower[1].second);
            long long x3 = pow(primeAndPower[2].first, primeAndPower[2].second);
            cout << x1 << " " << x2 << " " << x3 << endl;
        }
        else
        {
            if (sumOfPower == 3)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                if (primeAndPower[0].second > primeAndPower[1].second)
                {
                    long long x1 = primeAndPower[0].first;
                    long long x2 = primeAndPower[1].first;
                    long long x3 = pow(primeAndPower[1].first, primeAndPower[1].second - 1) * pow(primeAndPower[0].first, primeAndPower[0].second - 1);
                    cout << x1 << " " << x2 << " " << x3 << endl;
                }
                return;
            }
        }
    }
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