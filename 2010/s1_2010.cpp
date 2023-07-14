// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define ld long double
#define F first
#define S second

bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first > b.first;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string name;
    int score; int r, s, d;
    int computers;
    cin >> computers;
    vector<pair<int, string>> pcs;
    while (computers--) {
        cin >> name >> r >> s >> d;
        int score = 2*r + 3*s + d;
        pcs.push_back(make_pair(score, name));
    }
    sort(pcs.begin(), pcs.end(), cmp);
    if (pcs.size() == 0) {
        ;
    } else if (pcs.size() == 1) {
        cout << pcs[0].second;
    } else {
        cout << pcs[0].second << endl << pcs[1].second; 
    }
}