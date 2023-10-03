#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    unordered_map<int, int> mp;

    for(int i=0; i<n;i++){
        if(mp.find(k-arr[i])!=mp.end()){
            count+=mp[k-arr[i]];
            // cout<<count<<endl;
        }
        mp[arr[i]]++;
    }
    cout<<count<<endl;
    return 0;
}