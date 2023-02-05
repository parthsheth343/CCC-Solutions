// 15/15
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int space;
    int pos[5];
    pos[0] = 0;
    int d = 0;
    for (int i = 0; i < 4; i++) {
        cin >> space;
        pos[i+1] = pos[i] + space;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << abs(pos[j] - pos[i]) << " ";
        }
        cout << endl;
    }   
}