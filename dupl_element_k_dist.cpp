#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        if(mp.find(arr[i]) != mp.end()){
            int index = mp[arr[i]];
            int kp = i - index;
            if(kp <= k){
                cout << "True" << endl;
                return 0;
            }
        }
        mp[arr[i]] = i;
    }
    cout << "False" << endl;
    return 0;
}
