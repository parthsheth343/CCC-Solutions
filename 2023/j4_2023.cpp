// 15/15 
#include <bits/stdc++.h>
using namespace std;

int path[200002];
int path2[200002];

int ans = 0;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;    
    int x;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;      
        path[i] = x;
                if (x == 1) {
            ans += 3;
            if (path[i-1] == 1) {
                ans -= 2;
            }
        }
        
    }    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        path2[i] = x;      
        if (x == 1) {
            ans += 3;
            if (path2[i-1] == 1) {
                ans -= 2;
            }
        }
    }
    for (int i = 1; i <= n; i+=2) {
        if (path[i] == 1 and path2[i] == 1) ans-=2;
    }
    cout << ans;   
}