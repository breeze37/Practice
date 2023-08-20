#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#include<stack>
 
using namespace std;
 
void solution(){
    int n=0;
    cin>>n;
    cout<<n*n<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int x,y,n;
        cin>>x>>y;
        n=y%x;
        cout<<n;
    }

    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
    #ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
	#endif
    return 0;
}