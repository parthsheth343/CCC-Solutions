// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3];

    for (int i = 0; i < 4; i++) {
        if (arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] != sum) {
            cout << "not magic";
            return 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i] != sum) {
            cout << "not magic";
            return 0;
        }
    }
    cout << "magic";
}