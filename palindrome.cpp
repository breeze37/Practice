#include <bits/stdc++.h>
using namespace std;

void isPlaindrome(string a){
    int n =a.size();
    int flag=0;
    for (int i = 0; i < n/2; i++){
        if(a[i]!=a[n-1-i]){
            flag=1;
            break;
        }  
    }
        if (flag==1){
            cout<<"Is not palindrome"<<endl;
        }
        else{
            cout<<"Is plaindrome"<<endl;
        }

    }
int main(){
    string g;
    cout<<"Enter g: "<<endl;
    cin>>g;
    isPlaindrome(g);
    return 0;
}