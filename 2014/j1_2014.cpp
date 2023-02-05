#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if (a == b and b == c and a == 60) {
        cout << "Equilateral";
    } else if ((a + b + c) != 180) {
        cout << "Error";
    } else if (a != b and b != c and c != a) {
        cout << "Scalene";
    } else cout << "Isosceles";
    

}