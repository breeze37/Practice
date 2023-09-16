#include <bits/stdc++.h>
using namespace std;

void print(int i, int n, int sum)
{
    if (i > n)
    {
        return;
    }
    sum += i;
    cout << sum << endl;
    i++;
    print(i, n, sum);
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    print(1, n, sum);
    return 0;
}