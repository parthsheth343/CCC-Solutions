#include <bits/stdc++.h>
using namespace std;

int input;
int A = 0;
int B = 0;
int n;
string var;
string var2;

int main () {
    while (input != 7) {
        cin >> input;
        switch (input) {
            case 7: {break;}
            case 1: {
                cin >> var;
                if (var == "A"){
                    cin >> n;
                    A = n;
                } else {
                    cin >> n;
                    B = n;
                }
                break;
            }
            case 2: {
                cin>>var; 
                if (var == "A"){cout<<A<<endl;}else{cout<<B<<endl;}break;
            }
            case 3: {
                cin >> var; cin >> var2; 
                if (var == "A" && var2 == "B"){A+=B;}
                else if (var == "A" && var2 == "A"){A+=A;}
                else if (var == "B" && var2 == "A"){B+=A;}
                else {B+=B;}break;
            }
            case 4: {
                cin >> var; cin >> var2; 
                if (var == "A" && var2 == "B"){A=A*B;}
                else if (var == "A" && var2 == "A"){A=A*A;}
                else if (var == "B" && var2 == "A"){B=B*A;}
                else {B=B*B;}break;
            }
            case 5: {
                cin >> var; cin >> var2; 
                if (var == "A" && var2 == "B"){A-=B;}
                else if (var == "A" && var2 == "A"){A-=A;}
                else if (var == "B" && var2 == "A"){B-=A;}
                else {B-=B;}break;
            }
            case 6: {
                cin >> var; cin >> var2; 
                if (var == "A" && var2 == "B"){A=A/B;}
                else if (var == "A" && var2 == "A"){A=1;}
                else if (var == "B" && var2 == "A"){B=B/A;}
                else {B=1;}break;
            }
        }
    }
}