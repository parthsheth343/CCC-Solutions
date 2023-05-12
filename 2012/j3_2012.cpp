// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k; cin >> k;

    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= 3; c++) {
                for (int d = 1; d <= k; d++) {
                    if (a == 1) {
                        if (c == 1) {
                            cout << '*';
                        } else if (c == 2) {
                            cout << 'x';
                        } else if (c == 3) {
                            cout << '*';
                        } 
                    } else if (a == 2) {
                        if (c == 1) {
                            cout << ' ';
                        } else if (c == 2) {
                            cout << 'x';
                        } else if (c == 3) {
                            cout << 'x';
                        } 
                    } else if (a == 3) {
                        if (c == 1) {
                            cout << '*';
                        } else if (c == 2) {
                            cout << ' ';
                        } else if (c == 3) {
                            cout << '*';
                        }                   
                    }
                }
            }
            cout << endl;
        }
    }
}