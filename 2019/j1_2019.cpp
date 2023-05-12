// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int z = 3*(a-d) + 2*(b-e) + c -f;
    if (z > 0) cout << "A";
    else if (z == 0) cout << "T";
    else cout << "B";
    
}