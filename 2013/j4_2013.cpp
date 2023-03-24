#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, c;
    cin >> t >> c;
    vector<int> chores(c);
    for (int i = 0; i < c; i++) cin >> chores[i];
    sort(chores.begin(), chores.end());
    int ans = 0;
    for (int i = 0; t >= 0 and i < c; i++) {
        if (t-chores[i] >= 0) {
            t-= chores[i];
            ans++;
        } else break;
    }
    cout << ans;
}