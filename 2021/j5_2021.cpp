// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N, K;
    cin >> M >> N >> K;
    const int m = M;
    const int n = N;
    int rows[m];
    int cols[n];
    for (int i = 0; i < m; i++) rows[i] = 0;
    for (int i = 0; i < n; i++) cols[i] = 0;
    char dir;
    int path;
    for (int i = 0; i < K; i++) {
        cin >> dir >> path; --path;
        if (dir == 'R') rows[path]++;
        if (dir == 'C') cols[path]++;
    }
    int ans = 0;
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) if ((rows[i] + cols[j]) % 2 == 1) ans++;  
    cout << ans;
}

/*
SLOWER APPROACH - yields 10/15 points
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N, K;
    cin >> M >> N >> K;
    const int m = M;
    const int n = N;
    bool grid[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            grid[i][j] = 0;
        }
    }
    char dir; int path;
    for (int i = 0; i < K; i++) {
        cin >> dir >> path; --path;
        if (dir == 'C') {
            for (int j = 0; j < m; j++) {
                if (grid[j][path] == 0) grid[j][path] = 1; else grid[j][path] = 0;
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (grid[path][j] == 0) grid[path][j] = 1; else grid[path][j] = 0;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j]) ans++;
        }
    }
    cout << ans;
}
*/