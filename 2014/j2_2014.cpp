// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a = 0; int b = 0;
    char v;
    int amt;
    cin >> amt;
    for (int i = 0; i < amt; i++) {
        cin >> v;
        if (v == 'A') a++;
        if (v == 'B') b++;
    }

    
    if (a > b) cout << 'A';
    else if (b > a) cout << 'B';
    else cout << "Tie";

}