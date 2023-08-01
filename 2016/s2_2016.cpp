// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define F first
#define S second

bool cmp(int a, int b) {
    return b < a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q; cin >> q;
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    if (q == 2) sort(b.begin(), b.end(), cmp);
    else sort(b.begin(), b.end());
    int total = 0;
    for (int i = 0; i < n; i++) total += max(a[i], b[i]);
    cout << total << endl;
}