// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    const int N = n;
    int grid[N+1][N+1];
    int r90 = 4;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> grid[i][j];
        }
    }
    int cm = grid[1][1];
    if (grid[1][n] < cm) {
        cm = grid[1][n];
        r90 = 1;
    }
    if (grid[n][n] < cm) {
        cm = grid[n][n];
        r90 = 2;
    }
    if (grid[n][1] < cm) {
        cm = grid[n][1];
        r90 = 3;
    }
    if (r90 == 4) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    if (r90 == 1) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= n; j++) {
                cout << grid[j][i] << " ";
            }
            cout << endl;
        }
    }
    if (r90 == 2) {
        for (int i = n; i >= 1; i--) {
            for (int j = n; j >= 1; j--) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    if (r90 == 3) {
        for (int i = 1; i <= n; i++) {
            for (int j = n; j >= 1; j--) {
                cout << grid[j][i] << " ";
            }
            cout << endl;
        }
    }
}