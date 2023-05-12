// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int B;
    cin >> B;
    int P = 5*B - 400;
    cout << P << endl;
    if (P > 100) cout << -1;
    if (P == 100) cout << 0;
    if (P < 100) cout << 1;

}