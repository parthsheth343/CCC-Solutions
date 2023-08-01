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

    ld n; cin >> n;
    vector<pair<ld, ld>> s(n);
    ld t, p;
    for (ld i = 0; i < n; i++) {
        cin >> t >> p;
        s[i].first = t;
        s[i].second = p;
    }
    sort(s.begin(), s.end());
    ld ans = -1;
    for (ld i = 1; i < n; i++) {
        ans = max(ans, abs(s[i].second - s[i-1].second)/(s[i].first - s[i-1].first));
    }
    cout << ans << endl;
}