// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define F first
#define S second

bool prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; int n;
    for (int i = 0; i < t; i++) {
        cin >> n; int g = 2*n; int m;
        for (int j = 2; j <= n; j++) {
            m = g - j;
            if (prime(m) && prime(j)) {
                cout << j << ' ' << m << endl;
                break;
            }
        }        
    }   
}