// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    getline(cin, input);
    int happy = 0; int sad = 0;
    if (input.size() == 1 or input.size() == 2) {
        cout << "none";
        return 0;
    }

    for (int i = 0; i < input.size()-2; i++) {
        if (input[i] == ':' and input[i+1] == '-') {
            if (input[i+2] == ')') happy++;
            if (input[i+2] == '(') sad++;
        }
    }
    if (happy == 0 and sad == 0) cout << "none";
    if (happy > sad) cout << "happy";
    if (sad > happy) cout << "sad";
    if ((sad == happy) and happy != 0) cout <<"unsure";

}