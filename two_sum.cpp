#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int target;
        int n;
        cin >> n;
        cin>>target;
        int i,j;
        i = 0;
        j=n;
        int arr[n];
        sort(arr, arr+n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }
        while(i+j<target || i+j>target){
            if (i+(j-1)==target){
                cout<<arr[i,j]<<endl;
            }
            else (i+1)


        }
    }
    return 0;
}