// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a==b and b==c and c ==d) cout << "Fish At Constant Depth";
    else if (a > b and b > c and c > d) cout << "Fish Diving";
    else if (a < b and b < c and c < d) cout << "Fish Rising";
    else cout << "No Fish";
}