#include<bits/stdc++.h>
using namespace std;

string reverse_string(string s){
    char temp;
    int n = s.length();
    for(int i=0; i<n/2; i++){
        swap(s[i],s[n-i-1]);
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    string p = reverse_string(s);
    cout<<p<<endl;
    
}