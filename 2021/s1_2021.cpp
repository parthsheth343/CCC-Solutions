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

    int x; cin >> x;
    vector<double> sides(x+1), bottom(x);
    for (int i = 0; i < x+1; i++) cin >> sides[i];
    for (int i = 0; i < x; i++) cin >> bottom[i];
    double total = 0;
    for (int i = 0; i < x; i++) total += (bottom[i]*(sides[i]+sides[i+1]))/2;
    cout << fixed << setprecision(1) << total << endl;
}