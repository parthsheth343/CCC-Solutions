// 15/15 
// messy code, wrote during contest
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int len;
int ans = 0;
string word;
int rows, cols;

char grid[1000][1000];

void dfs(int r, int c, int pos, bool used, int dir, string direction) { //5 = right, 3 = diagnol 

    if (pos == len) {
        if (grid[r][c] == word[pos]) {
            ans++;
            return;
        } else {
            return;
        }
    }
    if (grid[r][c] != word[pos]) return;
    
    if (dir == 5) { //going straight
        
        if (used) {
            
            if (direction == "up") {
                dfs(r-1, c, pos+1, true, dir, direction);
            } else if (direction == "down") {
                dfs(r+1, c, pos+1, true, dir, direction);
            } else if (direction == "right") {
                dfs(r, c+1, pos+1, true, dir, direction);
            } else if (direction == "left") {
                dfs(r, c-1, pos+1, true, dir, direction);
            }
            return; 
            
        } else {
            
            if (direction == "up") {
                dfs(r, c-1, pos+1, true, dir, "left");
                dfs(r, c+1, pos+1, true, dir, "right");
                dfs(r+1, c, pos+1, true, dir, "down");
                dfs(r-1, c, pos+1, false, dir, "up");
            } 
            else if (direction == "down") {
                dfs(r, c-1, pos+1, true, dir, "left");
                dfs(r, c+1, pos+1, true, dir, "right");
                dfs(r+1, c, pos+1, false, dir, "down");
                dfs(r-1, c, pos+1, true, dir, "up");
            } 
            else if (direction == "right") {
                dfs(r, c-1, pos+1, true, dir, "left");
                dfs(r, c+1, pos+1, false, dir, "right");
                dfs(r+1, c, pos+1, true, dir, "down");
                dfs(r-1, c, pos+1, true, dir, "up");
            } 
            else if (direction == "left") {
                dfs(r, c-1, pos+1, false, dir, "left");
                dfs(r, c+1, pos+1, true, dir, "right");
                dfs(r+1, c, pos+1, true, dir, "down");
                dfs(r-1, c, pos+1, true, dir, "up");
            }
                     
        }     
    
    } else { //going diagnol
    
        if (used) {
    
            if (direction == "topright") {
                    dfs(r-1, c+1, pos+1, true, dir, direction);
                } else if (direction == "topleft") {
                    dfs(r-1, c-1, pos+1, true, dir, direction);
                } else if (direction == "bottomright") {
                    dfs(r+1, c+1, pos+1, true, dir, direction);
                } else if (direction == "bottomleft") {
                    dfs(r+1, c-1, pos+1, true, dir, direction);
                }

            
        } else {
            
            if (direction == "topright") {
                    dfs(r-1, c-1, pos+1, true, dir, "topleft");
                    dfs(r-1, c+1, pos+1, false, dir, "topright");
                    dfs(r+1, c+1, pos+1, true, dir, "bottomright");
                    dfs(r+1, c-1, pos+1, true, dir, "bottomleft");
                } 
            else if (direction == "topleft") {
                    dfs(r-1, c-1, pos+1, false, dir, "topleft");
                    dfs(r-1, c+1, pos+1, true, dir, "topright");
                    dfs(r+1, c+1, pos+1, true, dir, "bottomright");
                    dfs(r+1, c-1, pos+1, true, dir, "bottomleft");
                } 
                
            else if (direction == "bottomright") {
                    dfs(r-1, c-1, pos+1, true, dir, "topleft");
                    dfs(r-1, c+1, pos+1, true, dir, "topright");
                    dfs(r+1, c+1, pos+1, false, dir, "bottomright");
                    dfs(r+1, c-1, pos+1, true, dir, "bottomleft");
                } 
                
            else if (direction == "bottomleft") {
                    dfs(r-1, c-1, pos+1, true, dir, "topleft");
                    dfs(r-1, c+1, pos+1, true, dir, "topright");
                    dfs(r+1, c+1, pos+1, true, dir, "bottomright");
                    dfs(r+1, c-1, pos+1, false, dir, "bottomleft");
            }
            

        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> word;
    len = word.size()-1;
    cin >> rows >> cols;  
    char x;  
    vector<pair<int, int>> start;
    
    for (int i = 0; i <= rows+1; i++) {
        grid[i][0] = '1';
        grid[i][cols+1] = '1';
    }
    for (int i = 0; i <= cols +1; i++) {
        grid[0][i] = '1';
        grid[rows+1][i] = '1';
    } //setting up boundaries of the grid
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cin >> x;
            grid[i][j] = x;
            
            if(x == word[0])start.push_back({i, j});
        }
    }    
    for (auto i : start) {
        dfs(i.first-1, i.second, 1, false, 5, "up");
        dfs(i.first+1, i.second, 1, false, 5, "down");
        dfs(i.first, i.second-1, 1, false, 5, "left");
        dfs(i.first, i.second+1, 1, false, 5, "right");
        dfs(i.first+1, i.second+1, 1, false, 3, "bottomright");
        dfs(i.first+1, i.second-1, 1, false, 3, "bottomleft");
        dfs(i.first-1, i.second+1, 1, false, 3, "topright");
        dfs(i.first-1, i.second-1, 1, false, 3, "topleft");
    }  
    cout << ans;    
}