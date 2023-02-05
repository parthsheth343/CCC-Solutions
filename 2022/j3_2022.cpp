// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string instruct;
    cin >> instruct;
    string cur = "";
    string num = "";
    string pl;

    for (int i = 0; i < instruct.size(); i++) {
        if (i == instruct.size()-1) {
            num += instruct[i];
            cout << cur << " " << pl << " " << num << endl; 
            break;
        }
        if (instruct[i] == '+') {pl="tighten";} 
        else if (instruct[i]=='-') {pl = "loosen";} 
        else if (isdigit(instruct[i-1]) && (!(isdigit(instruct[i])))) {
            cout << cur << " " << pl << " " << num << endl;
            num = "";
            cur = "";
            cur += instruct[i];
        }
        else if (isdigit(instruct[i])) {
            num += instruct[i];
        } else {
            cur += instruct[i];
        }
        
    }
    
}