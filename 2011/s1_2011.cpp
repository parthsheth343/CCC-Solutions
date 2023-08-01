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
    int t = 0, s = 0; 
    string tx;
    for (int i = 0; i <= n; i++) {
        getline(cin, tx);
        for (int j = 0; j < tx.size(); j++) {
            if (tx[j] == 't' || tx[j] == 'T') t++;
            if (tx[j] == 's' || tx[j] == 'S') s++;
        }
    }
    if (t > s) cout << "English" << endl;
    else cout << "French" << endl;
}