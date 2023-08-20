#include <bits/stdc++.h>
#include <chrono>
#include <random>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define rep(i,n) for(ll i=0;i<n;i++)
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define vi vector <int>
#define vs vector <string>
#define vc vector <char>
#define vl vector <ll>
#define all(c) (c).begin(),(c).end()
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define deb(x) cerr<<#x<<' '<<'='<<' '<<x<<'\n'
using namespace std;
//genesis666int n;

int main(){
    int t;
    cin>>t;
    while(t--){

        string n;
        cin>>n;
        int zerodigt = 0;
        int onedigt = 0;
        
        for (int i=0; i<n.size();i++){
            if(n[i]='1')
                onedigt++;
            else
                zerodigt++;
        }
        
        if (zerodigt == 1 || onedigt == 1){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;

    return 0;
    }
    }
