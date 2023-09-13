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
    int count = 0;
    map <int,int> mp;
    for (int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<end
    }
}