// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, point, foul, ans=0;
    bool gold = 1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> point >> foul;
        if (point*5 - foul*3 > 40) {
            ans++;
        } else gold = 0;
    }
    cout << ans;
    if (gold) cout << '+';
    
}