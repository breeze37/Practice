#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;
    vector<int> v;
    int p = a; 
    
    for (int i = 0; i < n; i++) {
        v.push_back(p);
        p += d;
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}
