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

    int y; cin >> y;
    set<char> p;
    while (true) {
        y++;
        string s = to_string(y);
        int q = s.size(); 
        p.clear();
        for (int i = 0; i < q; i++) {
            p.insert(s[i]);
        }
        if (p.size() == q) {
            cout << s << endl;
            break;
        }
    }
}