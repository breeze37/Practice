#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int flor;
        int flag=0;
        if(n==1 || n==2){
            cout<<1<<endl;
            flag=1;
        }
        else{
            flor = ceil((n+x-3)/x);
            flag=0;
        }
        if(flag==0){
        cout<<flor+1<<endl;
        }
    }
return 0;    
}