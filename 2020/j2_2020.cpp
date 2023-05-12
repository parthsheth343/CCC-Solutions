// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int p, n, r;
    int ans = 0;
    cin >> p >> n >> r;
    int total = n;

    while (total <= p) {
        n = n*r;
        total += n;
        ans++;
    }
    cout << ans;
}