#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mn = min(a,b);
        int mx = max(a,b);
        int maxside = mn*2;
        if(maxside > mx){
            cout<<maxside*maxside<<endl;
        }
        else{
            cout<<mx*mx<<endl;
        }
    }
}