// 15/15 
#include <bits/stdc++.h>

using namespace std;

bool quit = false;
pair<char, int> instructions;
pair<int, int> start = {-1, -5};
vector<pair<int, int>> plan;


vector<pair<int, int>> newplan(pair<int, int> start1, pair<char, int> temp) {
    for (int i = 0; i < 3; i++) {plan.push_back({0,-i-1});}
    for (int i = 0; i < 3; i++) {plan.push_back({i+1,-3});}
    for (int i = 0; i < 2; i++) {plan.push_back({3,-i-4});}
    for (int i = 0; i < 2; i++) {plan.push_back({i+4,-5});}
    for (int i = 0; i < 2; i++) {plan.push_back({5,-i-3});}
    for (int i = 0; i < 2; i++) {plan.push_back({i+6,-3});}
    for (int i = 0; i < 4; i++) {plan.push_back({7,-i-4});}
    for (int i = 0; i < 8; i++) {plan.push_back({i-1,-7});}
    for (int i = 0; i < 2; i++) {plan.push_back({-1,-i-5});}
    vector<pair<int, int>> vt;
    vt.clear();
    switch (temp.first) {
        case 'r': {for (int j = 1; j <= temp.second; j++) {vt.push_back({start1.first + j, start1.second});}break;}
        case 'l': {for (int j = 1; j <= temp.second; j++) {vt.push_back({start1.first - j, start1.second});}break;}
        case 'u': {for (int j = 1; j <= temp.second; j++) {vt.push_back({start1.first, start1.second + j});}break;}
        case 'd': {for (int j = 1; j <= temp.second; j++) {vt.push_back({start1.first, start1.second - j});}break;}
    }
    return vt;
}

int main() {
    while (quit == false) {
        cin >> instructions.first >> instructions.second;
        if (instructions.first == 'q') {quit = true; break;}
        else {
            vector<pair<int, int>> va = newplan(start, instructions);
            for (int k = 0; k < plan.size(); k++) {
                for (int m = 0; m < va.size(); m++) {
                    if (plan[k] == va[m]) {quit = true; break;}
                }
                if (quit) {break;}
            }
            if (quit) {cout << va[va.size()-1].first << " " << va[va.size()-1].second << " DANGER" << endl; break;}
            else {
                plan.insert(plan.end(), va.begin(), va.end());
                start = plan[plan.size() - 1];
                cout << start.first << " " << start.second << " safe" << endl;
                va.clear();
            }
        }
    }
}