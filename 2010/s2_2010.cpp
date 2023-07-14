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

    int k; cin >> k;
    vector<pair<char, string>> seq;
    char x; string y;
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        seq.push_back(make_pair(x, y));
    }
    string dec; cin >> dec;
    int itr = 0;
    while (itr < dec.size()) {
        for (int i = 0; i < k; i++) {
            if (dec.substr(itr, (seq[i].second).size()) == seq[i].second) {
                cout << seq[i].first;
                itr += (seq[i].second).size();
                break;
            }
        }
    }
}