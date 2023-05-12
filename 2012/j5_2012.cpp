// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 1;
    while (true) {
        cin >> n;
        if (!n) break;

        string coins;
        string correct;

        for (int i = 1; i <= n; i++) {
            correct += '0' + i;
            coins += ' ';
        }

        for (int i = 0; i < n; i++) {
            int c; cin >> c;
            coins[c-1] = '0' + i + 1;
        }

        unordered_map<int, bool> visited;
        unordered_map<int, int> moves;

        visited[stoi(coins)] = true;
        moves[stoi(coins)] = 0;

        queue<string> q;
        q.push(coins);
        bool possible = false;

        while (!q.empty()) {
            string current = q.front();
            q.pop();
            if (current == correct) {
                possible = true;
                cout << moves[stoi(current)] << endl;
                break;
            }
            vector<bool> used(10, false);
            for (int i = 0; i < n; i++) {
                int coinpos = current[i] - '0';
                if (used[coinpos]) continue;
                used[coinpos] = true;
                if (coinpos < n) {
                    size_t rightcoin = current.find(to_string(coinpos + 1));
                    if (rightcoin == string::npos or rightcoin + 1 > i + 1) {
                        string newcurrent = current;
                        newcurrent[i] = '0' + coinpos + 1;
                        if (!visited[stoi(newcurrent)]) {
                            visited[stoi(newcurrent)] = true;
                            moves[stoi(newcurrent)] = moves[stoi(current)] + 1;
                            q.push(newcurrent);
                        }
                    }
                }
                if (coinpos > 1) {
                    size_t leftcoin = current.find(to_string(coinpos - 1));
                    if (leftcoin == string::npos or leftcoin + 1 > i + 1) {
                        string newcurrent = current;
                        newcurrent[i] = '0' + coinpos - 1;
                        if (!visited[stoi(newcurrent)]) {
                            visited[stoi(newcurrent)] = true;
                            moves[stoi(newcurrent)] = moves[stoi(current)] + 1;
                            q.push(newcurrent);
                        }
                    }
                }
            }
        }
        if (!possible) cout << "IMPOSSIBLE" << endl;
    }
}