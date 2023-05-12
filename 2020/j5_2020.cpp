// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"


int grid[1001][1001];
bool visited[1001][1001];
bool breaker = false;


void dfs(int g[1001][1001], bool v[1001][1001], int  M, int N, int x, int y) {
    if (breaker) {
        return;
    }
    if (x == M and y == N) {
        cout << "yes";
        breaker = true;
        return;
    }
    v[x][y] = 1;
    for (int i = 1; i*i <= g[x][y]; i++) {
        if (g[x][y] % i != 0) continue;
        if ((i*i == g[x][y]) && !(v[i][i]) && i <= M && i <= N) {
            dfs(g, v, M, N, i, i);
            break;
        }
        if (i <= M && g[x][y]/i <= N) if (!v[i][g[x][y]/i]) dfs(g, v, M, N, i, g[x][y]/i);
        if (g[x][y]/i <= M && i <= N) if (!v[g[x][y]/i][i]) dfs(g, v, M, N, g[x][y]/i, i);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m, n; //m = # of rows, n = # of columns
    cin >> m >> n;


    for (int i = 1; i <= n; i++){ 
        for (int j = 1; j <= m; j++) {
            visited[i][j] = 0;
        }
    }
    visited[1][1] = 1;
    int x;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            grid[i][j] = x;
        }
    }

    dfs(grid, visited, m, n, 1, 1);
    if (!breaker) cout << "no";
   
}