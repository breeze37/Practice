#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi = max(a,max(b,c));
        int in = maxi-a;
        if(in<maxi && in>0){
            n= n-in;
        }
        int in1 = maxi-b;
        if(in1<maxi && in1>0){
            n= n-in1;
        }
        int in2 = maxi-c;
        if(in2<maxi && in2>0){
            n= n-in2;
        }
        if(n%3==0 && n>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

return 0;    
}