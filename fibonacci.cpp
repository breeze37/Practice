#include<iostream>
#include<vector>
using namespace std;

void print(int ind, vector<int> ds, int arr[], int n){
    if(ind == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    print(ind, ds, arr, n);
    ds.pop_back();
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
        vector<int> ds;
        print(0,ds,arr,n);
    return 0;
}