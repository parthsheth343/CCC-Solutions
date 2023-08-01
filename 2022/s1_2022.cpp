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
    int ans = 0;
    if (n == 1 || n == 2 || n == 3 || n == 6 || n == 7 || n == 11) cout << 0 << endl;
    else {
        int x = n - n%5;
        int n5 = x/5;
        while (n != x) {
            x += 4;
            if (x == n) break;
            x -= 5;
            n5--;
        }
        while (n5 >= 0) {
            ans++;
            n5 -= 4;
        }
        cout << ans;
    }
}