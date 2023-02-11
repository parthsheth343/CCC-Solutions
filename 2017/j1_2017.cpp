// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y; cin >> x >> y;
    if (x > 0) if (y > 0) cout << 1;
    if (x > 0) if (y < 0) cout << 4;
    if (x < 0) if (y > 0) cout << 2;
    if (x < 0) if (y < 0) cout << 3;
    
}