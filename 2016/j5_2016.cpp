// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int q, n;
    cin >> q >> n;
    vector<int> a(n), b(n);
    int sum = 0; 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if (q == 1) for (int i = 0; i < n; i++) sum += max(a[i], b[i]);
    else for (int i = 0; i < n; i++) sum += max(a[i], b[n-i-1]);
    cout << sum;
}