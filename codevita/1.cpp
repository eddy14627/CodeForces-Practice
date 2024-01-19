#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin >> n;
    vector<int> arr1(n), arr2;
    for (auto &it : arr1)
        cin >> it;
    arr2 = arr1;
    int a_o = 0, d_o = 0;

    // ascending order
    for (int j = 0; j < n - 1; j++)
    {
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (arr1[i] < arr1[i - 1])
            {
                swap(arr1[i], arr1[i - 1]);
                a_o++;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    // descending order
    for (int j = 0; j < n - 1; j++)
    {
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (arr2[i] > arr2[i - 1])
            {
                swap(arr2[i], arr2[i - 1]);
                d_o++;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    if (a_o < d_o)
        cout << a_o << endl;
    else
        cout << d_o << endl;

    return 0;
}