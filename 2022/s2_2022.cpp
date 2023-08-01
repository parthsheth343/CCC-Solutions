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

    int s, ns, g;
    vector<pair<string, string>> same, notsame;
    cin >> s;
    string a, b, c;
    for (int i = 0; i < s; i++) {
        cin >> a >> b;
        same.push_back(make_pair(a, b));
    }
    cin >> ns; 
    for (int i = 0; i < ns; i++) {
        cin >> a >> b;
        notsame.push_back(make_pair(a, b));
    }
    cin >> g;
    unordered_map<string, int> groups;
    for (int i = 0; i < g; i++) {
        cin >> a >> b >> c;
        groups[a] = i;
        groups[b] = i;
        groups[c] = i;
    }
    int ans = 0;
    for (auto i : same) {
        if (groups[i.first] != groups[i.second]) ans++;
    }
    for (auto i : notsame) {
        if (groups[i.first] == groups[i.second]) ans++;
    }
    cout << ans << endl;
}