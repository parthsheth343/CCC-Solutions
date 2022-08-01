#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> seq;
    int t1, t2, i=0;
    cin >> t1;
    cin >> t2;
    seq.push_back(t1);
    seq.push_back(t2);
    while (true) {
        if (seq[i]-seq[i+1] <= seq[i+1]) {
            seq.push_back(seq[i]-seq[i+1]);
            i++;
        }
        else {break;}
    }
    cout << seq.size() +1 << endl;
}