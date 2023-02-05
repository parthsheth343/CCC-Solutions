// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int X, Y, G;
    string a, b, c;
    set<pair<string, string>> together, apart;
    unordered_map<string, int> groups;
    int ans = 0;
    
    cin >> X;  
    for (int i = 0; i < X; i++) {
        cin >> a >> b;
        together.insert(make_pair(a, b));
    }
    cin >> Y;
    for (int i = 0; i < Y; i++) {
        cin >> a >> b;
        apart.insert(make_pair(a, b));
    }
    cin >> G;
    for (int i = 0; i < G; i++) {
        cin >> a >> b >> c;
        groups[a] = i;
        groups[b] = i;
        groups[c] = i;
    }
    for (auto i : together) {
        if (groups[i.first] != groups[i.second]) ans++;
    }
    for (auto i : apart) {
        if (groups[i.first] == groups[i.second]) ans++;
    }
    cout << ans;
}

/*
//VALID SOLUTION WITHOUT USING MAPS - Better solution is above
// 15/15 points
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<pair<string, string>> together;
    set<pair<string, string>> apart;
    int t, a, g;
    string x, y, z;
    pair<string, string> a1, a2, a3, a4, a5, a6;
    cin >>t;
    for(int i = 0; i < t; i++) {
        cin >> x >> y;
        together.insert(make_pair(x, y));
    }
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> x >> y; 
        apart.insert(make_pair(x, y));
    }
    cin >> g;
    int ans = 0;
    for (int i = 0; i < g; i++) {
        cin >> x >> y >> z;
        a1 = make_pair(x, y);
        a2 = make_pair(x, z);
        a3 = make_pair(y, x);
        a4 = make_pair(y, z);
        a5 = make_pair(z, x);
        a6 = make_pair(z, y);
        if (apart.find(a1) != apart.end()) ans++;
        if (apart.find(a2) != apart.end()) ans++;
        if (apart.find(a3) != apart.end()) ans++;
        if (apart.find(a4) != apart.end()) ans++;
        if (apart.find(a5) != apart.end()) ans++;
        if (apart.find(a6) != apart.end()) ans++;
        if (together.find(a1) != together.end()) together.erase(together.find(a1));  
        if (together.find(a2) != together.end()) together.erase(together.find(a2)); 
        if (together.find(a3) != together.end()) together.erase(together.find(a3)); 
        if (together.find(a4) != together.end()) together.erase(together.find(a4)); 
        if (together.find(a5) != together.end()) together.erase(together.find(a5)); 
        if (together.find(a6) != together.end()) together.erase(together.find(a6)); 
    }
    ans += together.size();
    cout << ans;
    
}
*/