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

    int p1[200002], p2[200002];
    for (int i = 0; i < 200002; i++) {
        p1[i] = 0; p2[i] = 0;
    }
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p1[i];
    for (int i = 1; i <= n; i++) cin >> p2[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (p1[i] == 1) ans += 3;
        if (p1[i-1] == 1 && p1[i] == 1) ans -= 2;
        if (p2[i] == 1) ans += 3;
        if (p2[i-1] == 1 && p2[i] == 1) ans -= 2;
        if (i%2 == 1 && p1[i] == 1 && p2[i] == 1) ans -=2;
    }
    cout << ans << endl;    
}