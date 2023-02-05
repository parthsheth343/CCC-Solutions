#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int w=0;
    char r;
    for (int i = 0; i < 6; i++) {
        cin >> r;
        if (r == 'W') w++;
    }
    if (w >=5) cout << 1;
    else if (w >=3) cout << 2;
    else if (w >= 1) cout << 3;
    else cout << -1;    
}