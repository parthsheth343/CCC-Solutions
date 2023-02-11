// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, ans=0; cin >> n >> k;
    for (int i = 0; i <= k; i++) {
        ans += n;
        n=10*n;
    }
    cout << ans; 
}