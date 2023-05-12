// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string v;
    cin >> v;
    for (int i = 0; i < v.size(); i++) {
        if (v[i]=='I' or v[i]=='O' or v[i]=='S' or v[i]=='H' or v[i]=='Z' or v[i]=='X' or v[i]=='N') {
            continue;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}