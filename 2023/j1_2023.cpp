// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int p, c, ans = 0;
    cin >> p >> c;    
    if (p > c) ans = 500;   
    cout << ans + 50*p - 10*c; 
}