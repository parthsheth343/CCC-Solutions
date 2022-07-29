#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    vector<int> current; vector<int> diff;
    int n, v, t;
    while (true) {
        current.clear();
        diff.clear();

        cin >> n;
        if (n==0) {break;} else if (n==1) {cin >> v; cout << 0<< endl;}
        else {
            for (int i = 0; i < n; i++) {cin >>t; current.push_back(t);}
            for (int i = 0; i < n-1; i++) {diff.push_back(current[i+1]-current[i]);}
            
            for (int i = 1; i <= diff.size(); i++) { //The current cycle length is i
                bool on = true;
                if (i!= diff.size()) {
                    for (int j =0; j < diff.size()-i; j++) { //The current iterator in the diff loop is j
                        if (diff[j]!=diff[j+i]) {break;} else {;}
                        if (j == diff.size()-i-1) {cout << i<<endl; on = false; break;} else {;}
                    }
                } else {cout<<i<<endl;}
                if (on == false) {break;}
            }      
        }
    }
}