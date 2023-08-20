#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    long long int j;
    cin>>j;
    int ans=0;
    string g;
    while(j){
        int rem=j%10;
            g += rem  + '0';
            j = j/10;
        }
        // cout<<g;
        long long int x=0;
        int n= g.size();
        for(int i=0;i<n-1;i++){
            if(g[i]>='5' && g[i]<='9'){
                g[i] = '9'-g[i] + '0' ;
            }
            // cout<<g[i]<<" ";
            // x=(x*10)+(g[i]-'0');
            // cout<<x<<" ";
        } 
        if(g[n-1]>='5' && g[n-1]<'9'){
            g[n-1] = '9' - g[n-1] + '0';
            // x=(x*10)+(g[0]-'0');
        }
        // cout<<g;
        int i=n-1;
        while(i>=0){
            x=(x*10)+(g[i]-'0');
            // cout<<x<<" ";
            i--;
        }
        cout<<x;
        // cout<<g<<endl;
    return 0;
    }   