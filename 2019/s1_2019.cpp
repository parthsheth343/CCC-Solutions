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

    string s; cin >> s;
    int h = 0, v = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H') h++;
        else v++;
    }
    h = h % 2;
    v = v % 2;
    int a[4] = {1, 2, 3, 4};
    if (v%2==1) {
        swap(a[0], a[1]);
        swap(a[2], a[3]);
    }
    if (h%2==1) {
        swap(a[0], a[2]);
        swap(a[1], a[3]);
    }
    cout << a[0] << ' ' << a[1] << endl << a[2] << ' ' << a[3] << endl;
}