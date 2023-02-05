// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 8 or a == 9) {
        if (b == c) {
            if (d == 8 or d == 9) {
                cout << "ignore" << endl;
                return 0;
            }
        }
    }
    cout << "answer" << endl;
    
}