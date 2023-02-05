#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M; cin >> M;
    char type;
    int number;

    map<int, int> outgoing; 
    map<int, int> times;
    set<int> nums;

    int t = 0;

    for (int i = 0; i < M; i++) {
        cin >> type >> number;

        if (type == 'W') {
            t += number-1;
            continue;
        }
        if (times.count(number)==0) times[number]=0;
        nums.insert(number);
        if (type == 'R') {
            outgoing[number] = t;
            t++;
            continue;
        }

        times[number] = times[number] + t - outgoing[number];
        outgoing.erase(outgoing.find(number));
        t++;
    }   
    for (auto it = nums.begin(); it != nums.end(); it++) {
        if (outgoing.count(*it) > 0) {
            cout <<*it<< " "<< -1 << endl;
            continue;
        }
        cout << *it << " " << times[*it] << endl;
    }
}