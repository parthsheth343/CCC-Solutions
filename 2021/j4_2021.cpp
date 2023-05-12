// 15/15 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
char arr[500000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string books;
    cin >> books;
    int bookamt = books.size();
    int nM = 0, nL = 0;
    for (int i = 0; i < bookamt; i++) {
        if (books[i] == 'L') nL++;
        if (books[i] == 'M') nM++;
    }
    int notL = 0, notM = 0, mL = 0, lM = 0;
    for (int i = 0; i < nL; i++) {
        if (books[i] == 'M') mL++;
        if (books[i] != 'L') notL++;
    }
    for (int i = nL; i < nL + nM; i++) {
        if (books[i] == 'L') lM++;
        if (books[i] != 'M') notM++;
    }
    cout << notM + notL - min(mL, lM) << endl; 
}