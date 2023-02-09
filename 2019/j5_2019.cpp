// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

vector<pair<string, string>> rules;
string si, sf;
int steps;
bool found = false;
vector<tuple<int, int, string>> ans;
unordered_map<string, int> tried;

//Basically just use a dfs to generate a string after S moves
//and check if it is the string we want
void dfs(int move, string curstring) {

    if (tried[curstring + to_string(move)] == 7) return;

    if (move == steps) {

        if (curstring == sf) {
            found = true;
            return;
        } else {
            return;
        }
    }
    string tempstring;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= (int)curstring.size() - (int)(rules[i].first).size(); j++) {
            if (curstring.substr(j, (rules[i].first).size()) == rules[i].first) {
                tempstring = curstring;
                tempstring.replace(j, (rules[i].first).size(), rules[i].second);
                dfs(move+1, tempstring);
                if (found) {
                    ans.push_back(make_tuple(i+1, j+1, tempstring));
                    return;
                }
            }
        }
    }
    tried[curstring + to_string(move)] = 7;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        cin >> si >> sf;
        rules.push_back({si, sf});
    }
    cin >> steps;
    cin >> si >> sf;
    dfs(0, si);

    for (int i = ans.size()-1; i >= 0; i--) {
        cout << get<0>(ans[i]) << " " << get<1>(ans[i]) << " " << get<2>(ans[i]) << endl;
    }
    
}