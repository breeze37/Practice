#include <bits/stdc++.h>
#include <vector>

using namespace std;

int calculateMinCost(int n, vector<int> range, vector<int> cost) {
  vector<int> minCostTable(n + 1, INT_MAX);
  minCostTable[0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = max(0, i - range[i]); j < i; j++) {
      minCostTable[i] = min(minCostTable[i], minCostTable[j] + cost[i]);
    }
  }

  return minCostTable[n];
}

int main() {
  int n;
  cin >> n;

  vector<int> range(n + 1);
  for (int i = 0; i <= n; i++) {
    cin >> range[i];
  }

  vector<int> cost(n + 1);
  for (int i = 0; i <= n; i++) {
    cin >> cost[i];
  }

  int minCost = calculateMinCost(n, range, cost);

  if (minCost == INT_MAX) {
    cout << "-1" << endl;
  } else {
    cout << minCost << endl;
  }

  return 0;
}
