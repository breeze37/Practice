#include <bits/stdc++.h>
using namespace std;

// void print(int i, int n, int sum)
// {
//     if (i > n)
//     {
//         return;
//     }
//     sum += i;
//     cout << sum << endl;
//     i++;
//     print(i, n, sum);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     print(1, n, sum);
//     return 0;
// }




int print(int n){
    if(n==0){
        return 0;
    }
    int sum = n + print(n-1);
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<print(n)<<endl;
    
}
