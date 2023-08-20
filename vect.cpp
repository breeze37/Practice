#include <bits/stdc++.h>
using namespace std;
int main(){
    // int a[6] ={0} ;
    // vector<int> v(6,1) ;1
    int a[4][3];
    // vector<vector<int>> v(4,vector<int>(3,0));

    int n;
    cout<<"Enter size of array n : "<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter n elements : "<<endl;
    for (int i=0; i<n; i++){
        cin>>v[i];
        v[i]= v[i]*v[i];
    }
    for (int i=0; i<n; i++){
    cout<<v[i]<<" ";
    }
    

    return 0;


}
 