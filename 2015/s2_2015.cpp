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

    int j, a; cin >> j >> a; char s1; int s;
    vector<pair<int, bool>> jerseys(j);
    for (int i = 0; i < j; i++) {
        cin >> s1;
        if (s1 == 'S') s = 1;
        else if (s1 == 'M') s = 2;
        else if (s1 == 'L') s = 3;
        jerseys[i].first = s;
        jerseys[i].second = true;
    }
    int req;
    for (int i = 0; i < a; i++) {
        cin >> s1 >> req; --req;
        if (s1 == 'S') s = 1;
        else if (s1 == 'M') s = 2;
        else if (s1 == 'L') s = 3;
        if (jerseys[req].second) {
            if (jerseys[req].first >= s) {
                jerseys[req].second = false;
            }
        }
    }
    int total = 0;
    for (auto i : jerseys) if (!i.second) total++;
    cout << total << endl;
}