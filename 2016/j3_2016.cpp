#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int t = s.size();
    string q; // substring  
    string z = "";
    int ml = -10; // max length;
    for (int i = 0; i < t; i++) {
        for (int j = i; j <= t - i; j++) {
            q = s.substr(i, j);
            for (int k = q.size()-1; k >= 0; k--) {
                z += q[k];
            }
            int p = q.size();
            if (z == q) {
                ml = max(ml, p);
            }
            z = "";
        }
    }
    cout << ml;
}