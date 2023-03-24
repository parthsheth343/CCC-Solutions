// 15/15 points
#include <bits/stdc++.h>
using namespace std;

int main() {
  int fingers;
  int ans = 0;
  cin >> fingers;
  int r, l = 0;
  if (fingers > 5) {
    r = 5;
    l = fingers - r;
  }
  else r = fingers;

  while(r >= l) {
    r--;
    l++;
    ans++;
  }
  
  cout << ans;
  
}
