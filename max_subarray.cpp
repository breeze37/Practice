#include<bits/stdc++.h>
using namespace std;

int mat = INT_MIN;
int can (int arr[], int n, int sum){
    if(n==0){
        return 0;
    }

    else if(n>1){
    sum = arr[n] + can(arr, n-1, sum);
    if(sum<0){
        return 0;
    }
    }
    mat = max(mat,sum);
    cout<<mat<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    can(arr, n, 0);
}