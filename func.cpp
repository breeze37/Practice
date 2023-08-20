#include <bits/stdc++.h>
using namespace std;

int square(int x){
    // x=x*x;
    return x*x;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements : "<<endl;
    for (int i=0; i<n; i++){
        cin >> v[i];
        v[i] = square(v[i]);
    }
    for (int i=0; i<n; i++){
    cout<<v[i]<<endl;
    }
    return 0;
}