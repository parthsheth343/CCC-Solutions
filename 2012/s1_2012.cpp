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

    int j; cin >> j; int x = j-1;
    if (j < 4) cout << 0 << endl;
    else cout << x*(x-1)*(x-2)/6 << endl;   
}