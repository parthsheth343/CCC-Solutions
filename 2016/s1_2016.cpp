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

    int a[26], b[26];
    for (int i = 0; i < 26; i++) {
        a[i] = 0; b[i] = 0;
    }
    string a1, b1; cin >> a1 >> b1;
    for (int i = 0; i < a1.size(); i++) {
        a[a1[i] - 'a']++;
        if (b1[i] != '*') b[b1[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (b[i] > a[i]) {
            cout << 'N' << endl;
            return 0;
        }
    }
    cout << 'A' << endl;
}