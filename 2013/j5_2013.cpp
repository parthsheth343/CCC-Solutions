// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int fav;
int ans = 0;

void dfs(vector<pair<int, int>> gamesleft, int status[5]) {
    if (gamesleft.size() == 0) {
        for (int i = 1; i<=4; i++) {
            if (i == fav) continue;
            if (status[i] >= status[fav]) {
                return;
            }
        }
        ans++;
        return;
        
    }
    int t1 = gamesleft[0].first;
    int t2 = gamesleft[0].second;
    gamesleft.erase(gamesleft.begin());

    status[t1] += 3; 
    dfs(gamesleft, status);
    status[t1] -= 3;

    status[t2] += 3; 
    dfs(gamesleft, status);
    status[t2] -= 3;

    status[t1]++;
    status[t2]++;
    dfs(gamesleft, status);
    status[t1]--;
    status[t2]--;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> fav;
    int games; cin >> games;

    vector<pair<int, int>> gamesleft;
    for (int i = 1; i <= 3; i++) {
        for (int j = i + 1; j <= 4; j++) {
            gamesleft.push_back({i, j});
        }
    }
    int t1, t2, s1, s2;
    int teams[5];
    for (int i = 0; i < 5; i++) teams[i] = 0;
    for (int i = 0; i < games; i++) {
        cin >> t1 >> t2 >> s1 >> s2;
        gamesleft.erase(remove(gamesleft.begin(), gamesleft.end(), make_pair(t1, t2)), gamesleft.end());
        if (s1 > s2) teams[t1]+=3;
        else if (s1 < s2) teams[t2]+=3;
        else {
            teams[t1]+=1;
            teams[t2]+=1;
        }
    }
 
    dfs(gamesleft, teams);
    cout << ans;
}