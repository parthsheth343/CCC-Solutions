// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[5];
    for (int i = 0; i < 5; i++) arr[i] =0;
    int n;
    cin >> n;
    char x;  
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 5; i++) {
            cin >> x;
            if (x == 'Y') arr[i]++;
        }
    } 
    int maxim = -1; 
    vector<int> ans;    
    for (int i = 0; i < 5; i++) {
        if (arr[i] > maxim) maxim = arr[i];
    }    
    for (int i = 0; i < 5; i++) {
        if (arr[i] == maxim) {
            ans.push_back(i+1);
        }
    }
    sort(ans.begin(), ans.end());  
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1) {
            cout << ans[i];
            break;
        }
        cout << ans[i] << ',';
    }   
}