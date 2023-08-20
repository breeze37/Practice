#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n>>s;
        int count = 0,flag=0;
        for (int i=0; i<n; i++){  
            if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
                count = 0;
            }
            else{
                count+=1 ;
            }

            if (count>=4){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
