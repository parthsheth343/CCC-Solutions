#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    t -=  abs(a-c) + abs(b-d);
    if (t < 0) {
        cout << 'N';
        return 0;
    }
    if (t%2==0) cout << 'Y'; else cout << 'N';
}