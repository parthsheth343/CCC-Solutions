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
    vector<char> ans(n);
    for (int i = 0; i < n; i++) cin >> ans[i];
    char a; int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a; 
        if (a == ans[i]) c++;
    }
    cout << c << endl;
    
}