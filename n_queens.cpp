#include <bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//  ?????//           if(arr[i][j]==-1){
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
    // int n;
    // cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]){
                cout<<'Q'<<endl;
            }
        }        
    }
    return 0;
}