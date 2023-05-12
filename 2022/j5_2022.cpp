// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t; 
    cin >> n >> t;

    int r, c;
    vector<pair<int, int>> trees;

    for (int i = 0; i < t; i++) {
        cin >> r >> c;
        trees.push_back({r, c});
    } 
    trees.push_back({n, n+1}); //nth row and n+1 th column
    trees.push_back({n+1, n}); //n+1 th row and nth column
    trees.push_back({1, n+1});
    trees.push_back({n+1, 1});

    pair<int, int> bottomright;
    int ans = 0, tans = 999999, t1ans = -999999; // ans and temporary ans

    for (int i = 0; i < trees.size(); i++) {//the lower tree
        for (int j = 0; j < trees.size(); j++) { //the righter tree
            if (trees[i].first < trees[j].first or trees[i].second > trees[j].second) continue;
            bottomright = {trees[i].first -1, trees[j].second -1};
            tans = min(bottomright.first, bottomright.second);
            for (int k = 0; k < trees.size(); k++) {
                if (trees[k].first > bottomright.first or trees[k].second > bottomright.second) continue; 
                t1ans = max(bottomright.first - trees[k].first, bottomright.second - trees[k].second);
                tans = min(tans, t1ans);
            }
            if (tans != 999999) ans = max(ans, tans);
            tans = 999999;
            t1ans = -999999;
        }
    }
    cout << ans;
}