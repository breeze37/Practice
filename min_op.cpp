#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        if(mp.find(arr[i])!= mp.end()){
            mp[arr[i]]++;
        }
        else{
            mp[arr[i]]=1;
        }
    }
    for(auto it:mp){
        count = max(count, it.second);
    }
    cout<<count<<endl;
}