// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; string a; 
    int temp;
    string t1, t2;
    cin >> n;
    set<int> x, y;
    int b, c;
    for (int i = 0; i < n; i++) {
        cin >> a;
        temp = a.find(',');
        t1 = a.substr(0, temp);
        t2 = a.substr(temp+1);
        size_t sz;
        b = stoi(t1);
        c = stoi(t2);
        x.insert(b);
        y.insert(c);
    }
    cout << (*(x.begin())) - 1 << "," << (*(y.begin())) - 1 << endl;
    set<int>::iterator xe = x.end();
    set<int>::iterator ye = y.end();
    --xe; --ye;
    cout << *xe + 1 << "," << *ye + 1 << endl;
}