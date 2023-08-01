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

    int r, c, b;
    cin >> r >> c >> b;
    int rows[r], cols[c];
    for (int i = 0; i < r; i++) rows[i] = 0;
    for (int i = 0; i < c; i++) cols[i] = 0;
    char x; int z;
    for (int i = 0; i < b; i++) {
        cin >> x >> z; --z;
        if (x == 'R') rows[z]++;
        else cols[z]++;
    }
    int ans = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ((rows[i] + cols[j])%2==1) ans++;
        }
    }
    cout << ans << endl;
}