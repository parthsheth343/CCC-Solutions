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

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    ld m = 2e9;
    for (int i = 1; i < n-1; i++) {
        m = min(m, (ld) (arr[i+1]-arr[i-1])/2);
    }
    cout << fixed;
    cout << setprecision(1);
    cout << m;
}