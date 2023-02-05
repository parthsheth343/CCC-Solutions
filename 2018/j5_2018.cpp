// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

bool visited[10000];
int paths[10000][10001]; // (#ofpaths, path 1, path 2, ... path N)
bool done = false;
int spath = 1000000000;
int numpath[10000];

void dfs(int current, int cpath) {
    visited[current] = true;
    for (int i = 1; i <= paths[current][0]; i++) {
        if (numpath[paths[current][i]-1] > cpath+1) {
            numpath[paths[current][i]-1] = cpath +1;
            dfs(paths[current][i]-1, cpath+1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int x; int y;
    for (int i = 0; i < 10000; i++) numpath[i] = 1000000;

    for (int i = 0; i < n; i++) {
        cin >> x;
        paths[i][0] = x;
        for (int j = 1; j <= x; j++) {
            cin >> y;
            paths[i][j] = y;
        }
    }
    dfs(0, 1); 
    for (int i = 0; i < n; i++) {
        if (i == n-1 && visited[i] == true) {
            cout << 'Y' << endl;
            done = true;
            break;
        }
        if (visited[i]) continue; else break;
    }
    if (!done) cout << 'N' << endl;
    for (int i = 0; i < n; i++) {
        if (paths[i][0] != 0) continue;
        if (!visited[i]) continue;
        spath = min(spath, numpath[i]);

    }
    cout << spath;
  
}