#include <bits/stdc++.h>
using namespace std;

const int N = 1005;

int t, n, dp[N][N];
string s;

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> s;
        memset(dp, 0, sizeof dp);
        for (int i = n - 1; i >= 0; i--)
            for (int j = i; j < n; j++)
                if (s[i] == s[j])
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                else
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        if (n - dp[0][n - 1] <= 1) cout << -1 << endl;
        else cout << n - dp[0][n - 1] << endl;
    }
    return 0;
}
