#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int x;
    cin>>x;
    int ans=0;
    while(x){
        int rem=x%10;
        if(rem>=5 && rem<9){
            rem = 9-rem;
        }
        
    }   
    return 0;
}