// 15/15
#include <bits/stdc++.h>
using namespace std;

int main() {
    int humid, maxtime;
    cin >> humid;
    cin >> maxtime;
    bool reached = false;
    for (int t =1; t<=maxtime; t++) {
        int altitude = -6*pow(t,4) + humid*pow(t,3) + 2*pow(t,2) +t;
        if (altitude <=0) {cout<<"The balloon first touches ground at hour:"<<endl; cout<<t; reached = true; break;}}
    if (reached ==false) {cout<<"The balloon does not touch ground in the given time."<<endl;}
}