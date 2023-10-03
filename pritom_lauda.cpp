#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m;
    k = n*m;
    int arr[k];

    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    sort(arr,arr+k);
    int arra[n][m];
    int o=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arra[i][j]=arr[o++];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arra[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}