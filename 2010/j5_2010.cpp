// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int board[9][9];

void dfs(int steps, int x, int y) {
    if (x < 1 or x > 8 or y < 1 or y > 8) return;
    if (board[x][y] < steps) {
        return;
    } else {
        board[x][y] = steps;
    }

    dfs(steps+1, x-1, y-2);
    dfs(steps+1, x-2, y-1);
    dfs(steps+1, x-1, y+2);
    dfs(steps+1, x-2, y+1);
    dfs(steps+1, x+1, y-2);
    dfs(steps+1, x+2, y-1);
    dfs(steps+1, x+1, y+2);
    dfs(steps+1, x+2, y+1);

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i = 0; i <= 8; i++) {
        for (int j = 0; j <= 8; j++) {
            board[i][j] = 999;
        }
    }
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    board[x1][y1] = 0;

    dfs(0, x1, y1);

    cout << board[x2][y2];
}