// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int wins =0;
    char c;
    for (int i = 0; i < 6; i++) {
        cin >> c;
        if (c == 'W') wins++;
    }
    if (wins >= 5) cout << 1;
    else if (wins >= 3) cout << 2;
    else if (wins >= 1) cout << 3;
    else cout << -1;
     
}