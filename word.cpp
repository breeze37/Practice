#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    int n;
    n=a.size();
    int count=1;
    for (int i=0; i<n; i++){
        if(a[i]==' '){
            count++;
        }
    }
    cout<<a<<"\t\nThe no of words in the sentance : "<<count<<endl;
return 0;
}