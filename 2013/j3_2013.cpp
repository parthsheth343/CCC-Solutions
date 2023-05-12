// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int d; 
    cin >> d;
    bool breaker = false;
    while (true) {
        d++;
        string q = to_string(d);
        int r = q.size();
        vector<int> used;
        for (int i = 0; i < r; i++) {
            if (count(used.begin(), used.end(), (int) (q[i]-'0'))) {
                breaker = true;
                break;
            } else {
                used.push_back((int) (q[i]-'0'));
            }
        }
        used.clear();
        if (breaker) {
            breaker = false;
            continue;
        } else {
            cout << q;
            return 0;
        }
    }
}