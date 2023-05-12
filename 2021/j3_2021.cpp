// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string it;
    cin >> it;
    string dir = "";
    string current = "";
    while (it != "99999") {
        if (it[0] == '0' && it[1] == '0') {
            cout << dir << " " << it[2] << it[3] << it[4] << endl;
        } else if (((it[0] - '0') + (it[1] - '0')) % 2 == 0) {
            dir = "right";
            current = it.substr(2, 3);
            cout << dir << " " << current << endl;
            current = "";
        } else {
            dir = "left";
            current = it.substr(2, 3);
            cout << dir << " " << current << endl;
            current = "";
        }
        cin >> it;
    }
    
}