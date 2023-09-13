#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x;
    cin >> x;

    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int y = x - arr[i];
        if (st.find(y) == st.end())
        {
            cout << "Yes" << endl;
        }
    }
    cout<<"No"<<endl;
}