// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int month, day;
    cin >> month >> day;

    if (month < 2) {
        cout << "Before";
        return 0;
    }
    if (month > 2) {
        cout << "After";
        return 0;
    }
    if (day < 18) {
        cout << "Before";
        return 0;
    }
    if (day > 18) {
        cout << "After";
        return 0;
    }
    cout << "Special";
    return 0;


}