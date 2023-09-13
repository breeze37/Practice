#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x;

    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;


    for (int i = 0; i < n; i++)
    {
        int y = x - arr[i];
        if (st.find(y) != st.end())
        {
            // cout<<x<<ends;
            cout << "Yes" << endl;
            return 0;
        }
        st.insert(arr[i]);
    }
    cout<<"No"<<endl;

}