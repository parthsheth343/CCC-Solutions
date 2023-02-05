#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    string s; char c, d; int amt = 0;
    for (int i = 0; i < t; i++) {
        cin >> s;
        c = s[0];
        for (int j = 0; j < s.size(); j++) {
            if (j == s.size()-1){
                if (s[j]!=c) {
                    cout << amt << " " << s[j-1] << " " << 1 << " " << s[j] << endl;
                    break;
                } else {
                    amt++;
                    cout << amt << " " << s[j] << endl;
                    break;
                }
            }
            if (s[j]!= c) {
                cout << amt << " " << s[j-1] << " ";
                amt = 1;
                c = s[j];
            } else amt++;
        }
        amt = 0;  
    }
}