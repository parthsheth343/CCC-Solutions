#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int limit, speed;
    cout << "Enter the speed limit:";
    cin >> limit;
    cout << "Enter the recorded speed of the car:";
    cin >> speed;
    int above = speed - limit;


    if (above <= 0) {
        cout << "Congratulations, you are within the speed limit!";
    } else if (above <= 20) {
        cout << "You are speeding and your fine is $100.";
    } else if (above <= 30) {
        cout << "You are speeding and your fine is $270.";
    } else {
        cout << "You are speeding and your fine is $500.";
    }

}