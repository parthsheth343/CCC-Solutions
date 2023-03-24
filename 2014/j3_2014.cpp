// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a = 100, d = 100;
    int n; cin >> n;
    int x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x > y) d-=x;
        if (y > x) a-=y;
    }
    cout << a << endl << d << endl;
}