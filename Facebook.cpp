// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,l,c;
//         int A[n];
//         int B[n];
//         for(int i=0; i<n; i++){
//             if (A[0]>A[1] && A[0]>A[2]){
//                 cout<<'1'<<endl;
//             }
//             else if( A[1]>A[0] && A[1]> A[2]){
//                 cout<<'2'<<endl;
//             }
//             else{
//                 cout<<'3'<<endl;                
//             }
//             if (A[0]==A[1] && A[1]==A[2] && A[0]==A[2]){
//             for( int j=0; j<n; j++){
//                 if (B[0]>B[1] && B[0]>B[2]){
//                 cout<<'1'<<endl;
//             }
//             else if( B[1]>B[0] && B[1]>B[2]){
//                 cout<<'2'<<endl;
//             }
//             else {
//                 cout<<'3'<<endl;              
//             }    
//             }
//             }
//         }
//     }
// 	return 0;
// }










#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,l,c;
        int A[n];
        int B[n];
        // for(int i=0; i<n; i++){
            if (A[0]>A[1] && A[0]>A[2]){
                cout<<'1'<<endl;
            }
            else if( A[1]>A[0] && A[1]> A[2]){
                cout<<'2'<<endl;
            }
            else if (A[0]==A[1] && A[1]==A[2] && A[0]==A[2]){
                // for( int j=0; j<n; j++){
                    if (B[0]>B[1] && B[0]>B[2]){
                    cout<<'1'<<endl;
                    }
                    else if( B[1]>B[0] && B[1]>B[2]){
                    cout<<'2'<<endl;
                    }
                    else {
                    cout<<'3'<<endl;              
                    }
            }
            // }
            else{
                cout<<'3'<<endl;                
            }
            }
        // }
	return 0;
    }


