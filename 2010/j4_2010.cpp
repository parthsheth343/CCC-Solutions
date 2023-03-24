// 15/15 points
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int temp[20];
    int dif[19];
    int cyc[19];
    bool stop = false;
    for (int i = 0; i < 20; i++) temp[i] = 0;
    for (int i = 0; i < 19; i++) dif[i] = 0;
    for (int i = 0; i < 19; i++) cyc[i] = 0;
    while(true) {
        cin >> n;
        if (n == 0) break;
        if (n == 1) {
            cin >> temp[0];
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++) cin >> temp[i];
        for (int i = 0; i < n-1; i++) dif[i] = temp[i+1] - temp[i];
        for (int i = 0; i < n-1; i++) {
            cyc[i] = dif[i];
            for (int j = 0; j < i+1; j++) {
                for (int k = j; k < n-1; k+=(i+1)) {
                    if (dif[k] != cyc[j]) {
                        stop = true;
                        break;
                    }
                }
                if (stop) break;
            }
            if (stop) {
                stop = false;
                continue;
            } else {
                cout << i+1 << endl;
                break;
            }
        }
    }
}