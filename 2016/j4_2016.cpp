// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    char A, B, c, D, E;
    cin >> A >> B >> c >> D >> E;
    int a = A - '0';
    int b = B - '0';
    int d = D - '0';
    int e = E - '0';
    
    int minute = 10*a*60 + b*60 + 10*d + e;
    int curtime = minute;
    int timeleft = 120;
    while (timeleft > 0) {
        if ((curtime >= 420 and curtime <= 600) or (curtime >= 900 and curtime <= 1140)) {
            curtime+=2;
            timeleft-=1;
        } else {
            curtime+=1;
            timeleft-=1;
        }
        
    }
    int curmin = curtime%60;
    if (curmin % 2 == 1) curmin--;
    curtime = curtime/60;
    curtime%=24;
    if (curtime >= 10) {
        cout << curtime;
    } else {
        cout << 0 << curtime;
    }
    cout << ":";
    if (curmin == 0) {
        cout << "00";
    } else {
        cout << curmin;
    }
}