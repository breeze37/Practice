#include<bits/stdc++.h>
using namespace std;

int print(int arr[], int n){
    if(n < 0){
        return 0;
    }
    if(arr[n]<0){
        arr[n] = 0;
    }
    int sum = arr[n] + print(arr, n-1);
    return sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << print(arr, n-1) << endl;
    return 0;
}
