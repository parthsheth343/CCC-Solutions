// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    const int N = n;
    string firstnames[N];
    string lastnames[N];

    for (int i = 0; i < n; i++) cin >> firstnames[i];
    for (int i = 0; i < n; i++) cin >> lastnames[i];
    string name1, name2;
    for (int i = 0; i < n; i++) {
        name1 = firstnames[i];
        name2 = lastnames[i];
        if (name1 == name2) {
            cout << "bad";
            return 0;
        }
        for (int j = i+1; j < n; j++) {
            if (firstnames[j] == name2) {
                if (lastnames[j] != name1) {
                    cout << "bad";
                    return 0;
                }
            }
        }
    }
    cout << "good";
    return 0;
}