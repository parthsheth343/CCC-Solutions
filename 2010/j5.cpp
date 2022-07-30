#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> nextvec(int a, int b) {
    vector<vector<int>> tempvec;
    tempvec.clear();
    if (a-2>=0){
        if (b-1>=0) {
            tempvec.push_back({a-2, b-1});
        }
        if (b+1<=7) {
            tempvec.push_back({a-2, b+1});
        }
    }
    if (a-1>=0){
        if (b-2>=0) {
            tempvec.push_back({a-1, b-2});
        }
        if (b+2<=7) {
            tempvec.push_back({a-1, b+2});
        }
    }
    if (a+2<=7){
        if (b-1>=0) {
            tempvec.push_back({a+2, b-1});
        }
        if (b+1<=7) {
            tempvec.push_back({a+2, b+1});
        }
    }
    if (a+1<=7){
        if (b-2>=0) {
            tempvec.push_back({a+1, b-2});
        }
        if (b+2<=7) {
            tempvec.push_back({a+1, b+2});
        }
    }
    return tempvec;
}

int main() {
    ios_base::sync_with_stdio(0);

    int startx, starty, endx, endy;
    cin >> startx >> starty;
    cin >> endx >> endy;
    endx -= startx;
    endy -= starty;
    startx -= startx;
    starty -= starty;

    if (endx < 0) {endx = endx * -1;}
    if (endy < 0) {endy = endy * -1;}
    if (endx != endy and endy > endx) {int swap = endx; endx = endy; endy = swap;}

    vector<vector<int>> move1 = {{1, 2}, {2, 1}};
    vector<vector<int>> move2;
    vector<vector<int>> move3;
    vector<vector<int>> move4;
    vector<vector<int>> move5;
    vector<vector<int>> move6;
    vector<vector<int>> tempvec2;
    vector<int> final = {endx, endy};
    bool searching = true;
    while(searching) {
        if (endx == 0 and endy == 0) {cout << 0 <<endl; searching = false; break;}
        for (int j = 0; j < move1.size(); j++) {
            if (move1[j] == final) {cout<< 1<<endl; searching = false; break;}
        }
        if (searching) {
            for (int i = 0; i < move1.size(); i++) {
                int x = move1[i][0];
                int y = move1[i][1];
                tempvec2 = nextvec(x,y);
                move2.insert(move2.end(), tempvec2.begin(), tempvec2.end());
                tempvec2.clear();
            }
        }
        for (int j = 0; j < move2.size(); j++) {
            if (move2[j] == final) {cout<< 2<<endl; searching = false; break;}
        }
        if (searching) {
            for (int i = 0; i < move2.size(); i++) {
                int x = move2[i][0];
                int y = move2[i][1];
                tempvec2 = nextvec(x,y);
                move3.insert(move3.end(), tempvec2.begin(), tempvec2.end());
                tempvec2.clear();
            }
        }
        for (int j = 0; j < move3.size(); j++) {
            if (move3[j] == final) {cout<< 3<<endl; searching = false; break;}
        }
        if (searching) {
            for (int i = 0; i < move3.size(); i++) {
                int x = move3[i][0];
                int y = move3[i][1];
                tempvec2 = nextvec(x,y);
                move4.insert(move4.end(), tempvec2.begin(), tempvec2.end());
                tempvec2.clear();
            }
        }
        for (int j = 0; j < move4.size(); j++) {
            if (move4[j] == final) {cout<< 4<<endl; searching = false; break;}
        }
        if (searching) {
            for (int i = 0; i < move4.size(); i++) {
                int x = move4[i][0];
                int y = move4[i][1];
                tempvec2 = nextvec(x,y);
                move5.insert(move5.end(), tempvec2.begin(), tempvec2.end());
                tempvec2.clear();
            }
        }
        for (int j = 0; j < move5.size(); j++) {
            if (move5[j] == final) {cout<< 5<<endl; searching = false; break;}
        }
        if (searching) {
            for (int i = 0; i < move5.size(); i++) {
                int x = move5[i][0];
                int y = move5[i][1];
                tempvec2 = nextvec(x,y);
                move6.insert(move6.end(), tempvec2.begin(), tempvec2.end());
                tempvec2.clear();
            }
        }
        for (int j = 0; j < move6.size(); j++) {
            if (move6[j] == final) {cout<< 6<<endl; searching = false; break;}
        }
    }
}