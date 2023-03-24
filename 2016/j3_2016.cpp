// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string word; cin >> word;
    string q;
    string p;
    int ans = 1;

    for (int i = 0; i < word.size() - 1; i++) {
        for (int j = 1; i + j <= word.size(); j++) {
            q = word.substr(i, j);
            p = q;
            reverse(p.begin(), p.end());
            if (q == p) ans = max(ans, (int) p.size());
        }
    }
    cout << ans;
}