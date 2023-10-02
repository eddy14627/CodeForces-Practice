#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxi = 0;
    for(auto &it: arr){
        maxi = max(maxi,it);
        cin>>it;
    }
    vector<int> prime(maxi+1);
    vector<vector<int>> factors(maxi+1);
    for(int i=2;i<=maxi;i++){
        for(int j=i*i;j<=maxi;j+=i){
            prime[j] = 1;
        }
    }
    for(int num=2; num<=maxi; num++){
        if(prime[num]==0) continue;
        for(int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                factors[num].push_back(i);

            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
#endif
 
    int t;
    cin>>t;
    while(t)
    {
        t--;
        solve();
    }
    return 0;
}