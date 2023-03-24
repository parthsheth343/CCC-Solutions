// 15/15
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;
    int n = word.size();
    int num;
    int num2;
    char x;

    for (int i = 0; i < n; i++) {
        if (word[i] == 'a' or word[i] == 'e' or word[i] == 'o' or word[i] == 'u' or word[i] == 'i') {
            cout << word[i];
            continue;
        }
        cout << word[i];

        num = word[i];
        num2 = word[i]+1;        
        if (num <= 99) cout << 'a';
        else if (num <= 103) cout << 'e';
        else if (num <= 108) cout << 'i';
        else if (num <= 114) cout << 'o';
        else cout << 'u';

        if (num2 == 101) cout << 'f';
        else if (num2 == 105) cout << 'j';
        else if (num2 == 111) cout << 'p';
        else if (num2 == 117) cout << 'v';
        else if (num2 == 123) cout << 'z';
        else cout << ((char)(num2));




    }
     
}