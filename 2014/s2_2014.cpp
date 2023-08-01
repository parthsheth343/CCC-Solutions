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
    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    unordered_map<string, string> friends;
    for (int i = 0; i < n; i++) {
        friends[a[i]] = b[i];
        if (a[i] == b[i]) {
            cout << "bad" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != friends[friends[a[i]]]) {
            cout << "bad" << endl;
            return 0;
        }
    }
    cout << "good" << endl;    
}