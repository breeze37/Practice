#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        // if (mp.find(arr[i]) == mp.end())
        // {
        //     mp[arr[i]]=1;
        // }
        // else{
            mp[arr[i]]++;
        // }
    }
    for (auto it:mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}