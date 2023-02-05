#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<char,int> vals;
    vals['A'] = 0;
    vals['B'] = 0;

    int x; 
    char v;
    char v2;
    int z;

    while(true) {
        cin >> x;
        if (x == 7) break;
        else if (x == 1) {
            cin >> v >> z;
            vals[v] = z;
        } else if (x == 2) {
            cin >> v;
            cout << vals[v] << endl;
        } else if (x == 3) {
            cin >> v >> v2;
            vals[v] = vals[v] + vals[v2];
        } else if (x == 4) {
            cin >> v >> v2;
            vals[v] = vals[v] * vals[v2];
        } else if (x == 5) {
            cin >> v >> v2;
            vals[v] = vals[v] - vals[v2];
        } else if (x == 6) {
            cin >> v >> v2;
            vals[v] = vals[v]/vals[v2];
        }
    }
}