#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; 
    cin >> s;
    int h = 0, v = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'V') v++; else h++;
    }
    int arr[4] = {1, 2, 3, 4};
    if (h%2 == 1) {
        swap(arr[0], arr[2]);
        swap(arr[1], arr[3]);
    }
    if (v%2 == 1) {
        swap(arr[0], arr[1]);
        swap(arr[2], arr[3]);
    }
    cout << arr[0] << " " << arr[1] << endl << arr[2] << " " << arr[3];
}