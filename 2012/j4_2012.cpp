#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k; string word;
    cin >> k >> word;
    int q;

    for (int i = 0; i < word.size(); i++) {
        int q = word[i];
        for (int j = 0; j < k; j++) {
            q--;
            if (q < 'A') q = 'Z';
        }
        for (int j = 0; j < 3*(i+1); j++) {
            q--;
            if (q < 'A') q = 'Z';
        }
        cout << (char) q;
    }
}