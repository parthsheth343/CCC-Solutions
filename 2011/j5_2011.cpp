// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int n;
int ans = 0;
int parent[6];

void dfs(int child, vector<int> group) {
    if (child == 0) {
        ans++;
        return;
    }
    if (count(group.begin(), group.end(), parent[child]) == 0) {
        dfs(child-1, group);
    } else {
        dfs(child-1, group);
        group.push_back(child);
        dfs(child-1, group);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n-1; i++) {
        cin >> parent[i];
    }
    vector<int> ppl;
    ppl.push_back(n);
    dfs(n-1, ppl);
    cout << ans;
}