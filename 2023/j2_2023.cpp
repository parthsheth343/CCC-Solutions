// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ans =0; 
    int n; 
    cin >> n;   
    string x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == "Poblano") ans += 1500;
        if (x == "Mirasol") ans += 6000;
        if (x == "Serrano") ans += 15500;
        if (x == "Cayenne") ans += 40000;
        if (x == "Thai") ans += 75000;
        if (x == "Habanero") ans += 125000;   
    }
    cout << ans;   
}