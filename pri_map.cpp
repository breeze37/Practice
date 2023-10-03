#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
        mp[arr1[i]]++;
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
        if(mp[arr2[i]]>0){
            mp[arr2[i]]--;
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
    
}