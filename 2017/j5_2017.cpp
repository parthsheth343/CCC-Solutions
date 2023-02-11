// 15/15 points
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int l;

    int len[2001];
    int heights[4001];
    for (int i = 0; i < 4001; i++) heights[i] = 0; //1 - indexed
    for (int i = 0; i < 2001; i++) len[i] = 0; //1 - indexed
    for (int i = 0; i < n; i++) {
        cin >> l;
        len[l]++;
    }

    //calculate how much each height
    int right, left;
    for (int i = 2; i <= 4000; i++) {
        //current height is i
        if (i >= 2002) {
            right = 2000;
            left = i - 2000;
        } else {
            left = 1;
            right = i - 1;
        }
        while(left <= right) {
            if (right == left) {
                heights[i] += len[left]/2;
                break;
            }
            heights[i] += min(len[left], len[right]);
            left++;
            right--;
        }
    }
    int longestfence = 0;
    for (int i = 0; i <= 4000; i++) {
        longestfence = max(longestfence, heights[i]);
    }
    int ans = 0;
    for (int i = 0; i <= 4000; i++) {
        if (heights[i] == longestfence) {
            ans++;
        }
    }
    cout << longestfence << " " << ans << endl;
}