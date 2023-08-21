#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int ev = n*m;
    if(ev==1){
        cout<<1<<endl;
    }
    else if(ev%2==0){
        cout<<ev/2<<endl;
    }
    else if(ev%2==1){
        cout<<((ev-1)/2)+1<<endl;
    }
    }
return 0; 
}