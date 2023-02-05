#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    int x; char c;
    for (int i = 0; i < t; i++) {
        cin >> x >> c;
        for (int j = 0; j < x; j++) cout << c;
        cout << endl;
    }
    
}