#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        int oddCount = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            sum += num;
            if (num % 2 != 0) {
                oddCount++;
            }
        }

        if (sum % 2 != 0 || (oddCount > 0 && oddCount < n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
