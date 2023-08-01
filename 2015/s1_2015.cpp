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

    int k; cin >> k; int n; int total = 0;
    stack<int> s;
    for (int i = 0; i < k; i++) {
        cin >> n;
        if (n != 0) s.push(n);
        else s.pop();    
    }
    while (!s.empty()) {
        total += s.top();
        s.pop();
    } 
    cout << total << endl;
}