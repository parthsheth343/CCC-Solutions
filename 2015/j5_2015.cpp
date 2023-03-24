// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int n, k;
int dp[251][251][251];

int pi(int n, int k, int minima) {
    if (dp[n][k][minima] == 0) {
        if (k == 1 or (n == k)) {
            dp[n][k][minima] = 1;
        } else {
            int ways = 0;
            for (int i = minima; i <= (n/k); i++) {
                ways += pi(n-i, k-1, i);
            }
            dp[n][k][minima] = ways;
        }
    }
    return dp[n][k][minima];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    cout << pi(n, k, 1);
}