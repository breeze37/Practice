#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_map<int, int> mp;
    int sum=0; 
    for(int i=0; i<n; i++){
        if(mp.find(arr[i])!=mp.end()){
            mp[arr[i]]++;
        }
        else
        mp[arr[i]]=1;
    }
    for(auto it:mp){
        if((it.second)>=(it.first)){
            sum+=it.first;
            // cout<<sum<<endl;
        }
        // cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<sum<<endl;
    return 0;
}