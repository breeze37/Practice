#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int total = 0;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if (i == 0) {
            total = b[i];
            mx = total;
        }
        else if(i>0){
        total += b[i] - a[i];
        mx = max(mx,total);
    }
    }

    cout << mx;
}