// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define F first
#define S second

int rows, cols;
int grid[1001][1001];
bool vis[1001][1001];
bool breaker = false;

void dfs(int r, int c) {
    if (r == rows && c == cols) {
        breaker = true;
        return;
    }
    int x = grid[r][c];
    for (int i = 1; i <= sqrt(x); i++) {
        if (x%i == 0) {
            if (i <= rows && x/i <= cols) {
                if (!vis[i][x/i]) {
                    vis[i][x/i] = 1;
                    dfs(i, x/i);
                    if (breaker) return;
                }
            }
            if (x/i <= rows && i <= cols) {
                if (!vis[x/i][i]) {
                    vis[x/i][i] = 1;
                    dfs(x/i, i);
                    if (breaker) return;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cin >> grid[i][j];
        }
    }
    dfs(1, 1);
    if (breaker) cout << "yes" << endl;
    else cout << "no" << endl;
}