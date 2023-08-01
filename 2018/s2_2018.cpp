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
    int flowers[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> flowers[i][j];
    int r = 1; //1 = topleft, 2 = topright, 3 = bottomright, 4 = bottomleft
    int x = min(flowers[0][0], min(flowers[0][n-1], min(flowers[n-1][n-1], flowers[n-1][0])));
    if (x == flowers[0][0]) r = 1;
    if (x == flowers[0][n-1]) r = 2;
    if (x == flowers[n-1][n-1]) r = 3;
    if (x == flowers[n-1][0]) r = 4;
    if (r == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << flowers[i][j] << ' ';
            }
            cout << endl;
        }
    }
    if (r == 2) {
        for (int i = n-1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                cout << flowers[j][i] << ' ';
            }
            cout << endl;
        }
    }
    if (r == 3) {
        for (int i = n-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {
                cout << flowers[i][j] << ' ';
            }
            cout << endl;
        }
    }
    if (r == 4) {
        for (int i = 0; i < n; i++) {
            for (int j = n-1; j >= 0; j--) {
                cout << flowers[j][i] << ' ';
            }
            cout << endl;
        }
    }
}