// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string t, s;
    cin >> t >> s;
    int ssize = s.size(); //search length
    int tsize = t.size();
    string shift = "";
    for (int i = 0; i < tsize; i++) {
        if (t[i] != s[0]) continue;
        for (int j = ssize; j >= 1; j--) { //checks through all the cyclic shifts of s
            //currently at pos i in T
            if (i - ssize + j < 0) continue;
            if (i + j > tsize) continue;
            shift = t.substr(i, j) + t.substr(i - ssize + j, ssize - j);
            if (shift == s) {
                cout << "yes" << endl;
                return 0;
            }      
        }
    }
    cout << "no" << endl;
}