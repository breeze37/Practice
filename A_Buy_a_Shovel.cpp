#include <iostream>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int t;
    for(int i=1;i<100;i++){
        t = k*i;
        if(t%10==0 || t%10==r){
            cout<<i<<endl;
            break;
        }
    }
}