// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string name; 
    string mname;
    int bid;
    int mbid = 0;
    for (int i = 0; i < N; i++) {
        cin >> name >> bid;
        if (bid > mbid) {
            mname = name;
            mbid = bid;
        }
    }
    cout << mname;
    
}