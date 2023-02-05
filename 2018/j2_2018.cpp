// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    const int N = n;
    char y[N];
    char q;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> q;
        if (q == y[i] and q == 'C') ans++;
    }
    cout << ans;
    
}