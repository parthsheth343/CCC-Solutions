#include <bits/stdc++.h>
using namespace std;

int main(){
    int nf; //Nikky forward distance
    int nb; //Nikky back distance
    int nt=0; //Nikky total distance
    int bf; //Byron forward distance
    int bb; //Byron back distance
    int bt=0; //Byron total distance
    int nc=0; //Total Counter for Nikky
    int bc=0; //Total Counter for Byron
    int ts; //Total steps
    cin >> nf;
    cin >> nb;
    cin >> bf;
    cin >> bb;
    cin >> ts;
    while (nc!=ts) {
        for (int i=0; i<nf; i++) {
            if (nc == ts) {
                break;
            }
            nt++;
            nc++;
            if (nc == ts) {
                break;
            }
        }
        for (int i=0; i<nb; i++) {
            if (nc == ts) {
                break;
            }
            nt--;
            nc++;
            if (nc == ts) {
                break;
            }
        }



    }
    while (bc!=ts) {
        for (int i=0; i<bf; i++) {
            if (bc == ts) {
                break;
            }
            bt++;
            bc++;
            if (bc == ts) {
                break;
            }
        }
        for (int i=0; i<bb; i++) {
            if (bc == ts) {
                break;
            }
            bt--;
            bc++;
            if (bc == ts) {
                break;
            }
        }
    }
    if (nt > bt) {
        cout << "Nikky";
    } else if (nt < bt) {
        cout << "Byron";
    } else {
        cout << "Tied";
    }


}