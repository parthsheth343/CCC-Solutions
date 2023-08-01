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

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    if (n%2 == 0) {
        vector<int> a((int)n/2), b((int)n/2);
        for (int i = 0; i < (int)n/2; i++) a[i] = arr[i];
        for (int i = 0; i < (int)n/2; i++) b[i] = arr[i+(int)n/2];
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < (int) n/2; i++) {
            cout << a[i] << ' ' << b[i] << ' ';
        }
    } else {
        --n;
        int q = arr[0];
        arr.erase(arr.begin());
        vector<int> a((int)n/2), b((int)n/2);
        for (int i = 0; i < (int)n/2; i++) a[i] = arr[i];
        for (int i = 0; i < (int)n/2; i++) b[i] = arr[i+(int)n/2];
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < (int) n/2; i++) {
            cout << a[i] << ' ' << b[i] << ' ';
        }
        cout << q << ' ';
    }
}