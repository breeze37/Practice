#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
//     for (int i=0;i<9; i++){
//         for(int j=0;j<i;j++){
//             cout<<"+ ";
//         }
//         cout<<"+ "<<endl;
//     }
    int n;
    cout<<"Enter : ";
    cin>>n;
    for(int i=0;i<n;i++){
        // for (int j=0;j<n-i-1;j++){
        //     cout<<"   ";
        // }
        // for (int k=n-i;k<n;k++){
        //     cout<<" + ";
        // }
        // for (int j=0;j<=i;j++){
        //     cout<<" + ";
        // }

        //4th triangle
        for (int j=0;j<i;j++){
            cout<<"   ";
        }
        for (int k=i;k<n;k++){
            cout<<"+  ";
        }

        //3rd traingle
        // for (int l=n;l>0;l--){
        //     cout<<"+  ";
        // }
        for (int k=i;k<n;k++){
            cout<<"+  ";
        }

        cout<<endl;
    }
    // for (int i=0;i<=n;i++){
    //     for (int j=0;j<n/2;j++){
    //         cout<<"  ";
    //     }
    //     for (int k=n/2;k<n;k++){
    //         cout<<"+  ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}