#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[100];
        int sum=0;
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        if(sum%2!=0){
            flag=1;
        }
        else{
            flag=0;
        }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}