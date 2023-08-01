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

    ll w; cin >> w;
    ll n; cin >> n;

    vector<int> arr(n+4); ll total = 0;
    for (int i = 0; i < n+4; i++) arr[i] = 0;
    for (int i = 4; i < n+4; i++) cin >> arr[i];
    //simulate
    if (n == 1 && arr[4] <= w) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 4; i < n+4; i++) {
        total -= arr[i-4]; total += arr[i];
        if (total > w) {
            cout << i-4 << endl;
            break;
        }
        if (i == n+3) {
            cout << n << endl;
        }
    }
}