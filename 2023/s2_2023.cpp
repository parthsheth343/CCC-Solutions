// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int grid[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) grid[i][j] = 0;
    for (int i = 0; i < n; i++) cin >> grid[0][i];
    if (n == 1) {
        cout << 0;
        return 0;
    } else if (n == 2) {
        cout << 0 << ' ' << abs(grid[0][0] - grid[0][1]);
        return 0;
    } else if (n == 3) {
        cout << 0 << ' ' << min(abs(grid[0][0] - grid[0][1]), abs(grid[0][2] - grid[0][1])) << ' ' << abs(grid[0][0] - grid[0][2]);
        return 0;
    }
    // n >= 4 now
    cout << 0 << ' ';
    int m = 2e9;
    for (int i = 0; i < n-1; i++) {
        grid[1][i] = grid[0][i+1] - grid[0][i];
        m = min(m, abs(grid[1][i]));
    }
    cout << m << ' ';
    m = 2e9;
    for (int i = 0; i < n-2; i++) {
        grid[2][i] = grid[1][i] + grid[1][i+1];
        m = min(m, abs(grid[2][i]));
    }
    cout << m << ' ';
    m = 2e9;
    int k = n-3;
    for (int i = 3; i < n; i++) {
        for (int j = 0; j < k; j++) {
            grid[i][j] = grid[i-1][j] + grid[i-1][j+1] - grid[i-2][j+1];
        }
        k--;
    }
    k = n-3;
    for (int i = 3; i < n; i++) {

        for (int j = 0; j < k; j++) {
            grid[i][j] = abs(grid[i][j]) + abs(grid[i-2][j+1]);
            m = min(m, grid[i][j]);
        }
        cout << m << ' ';
        m = 2e9;
        k--;
    }
    cout << endl;
}