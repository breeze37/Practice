#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max_dist = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = i;
        }
        else
        {
            max_dist = max(max_dist, i - mp[arr[i]]);
        }
    }
    cout << max_dist << endl;
}