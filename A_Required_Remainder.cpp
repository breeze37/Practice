#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int k;
        int i=n-1;
        k = n%x;
        if(k==y){
            cout<<n<<endl;
        }
        else if(k>y){
            cout<<n-(k-y)<<endl;
        }
        else{
            cout<<n-(x-(y-k))<<endl;
        }
    }
        return 0;
}