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

    string s; cin >> s; int lastval = -1, curval = 0, total = 0; int multiplier;
    for (int i = s.size() -1; i > -1; i--) {
        if (i%2 == 0) {
            multiplier = s[i] - '0';
            if (lastval > curval) total -= curval*multiplier;
            else total += curval*multiplier;
            lastval = curval; 
        } else {
            if (s[i] == 'I') curval = 1;
            else if (s[i] == 'V') curval = 5;
            else if (s[i] == 'X') curval = 10;
            else if (s[i] == 'L') curval = 50;
            else if (s[i] == 'C') curval = 100;
            else if (s[i] == 'D') curval = 500;
            else if (s[i] == 'M') curval = 1000;
        }
    }
    cout << total << endl;    
}