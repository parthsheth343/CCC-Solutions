//Trash bruteforce attempt
#include <bits/stdc++.h>
using namespace std;


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
    if (endx == 0 and endy == 0) {cout<<0;}
    else if (endx==1 and endy==0) {cout<<3;}
    else if (endx==1 and endy==1) {cout<<4;}
    else if (endx==2 and endy==0) {cout<<2;}
    else if (endx==2 and endy==1) {cout<<1;}
    else if (endx==2 and endy==2) {cout<<4;}
    else if (endx==3 and endy==0) {cout<<3;}
    else if (endx==3 and endy==1) {cout<<2;}
    else if (endx==3 and endy==2) {cout<<3;}
    else if (endx==3 and endy==3) {cout<<2;}
    else if (endx==4 and endy==0) {cout<<2;}
    else if (endx==4 and endy==1) {cout<<3;}
    else if (endx==4 and endy==2) {cout<<2;}
    else if (endx==4 and endy==3) {cout<<3;}
    else if (endx==4 and endy==4) {cout<<4;}
    else if (endx==5 and endy==0) {cout<<3;}
    else if (endx==5 and endy==1) {cout<<4;}
    else if (endx==5 and endy==2) {cout<<3;}
    else if (endx==5 and endy==3) {cout<<4;}
    else if (endx==5 and endy==4) {cout<<3;}
    else if (endx==5 and endy==5) {cout<<4;}
    else if (endx==6 and endy==0) {cout<<4;}
    else if (endx==6 and endy==1) {cout<<3;}
    else if (endx==6 and endy==2) {cout<<4;}
    else if (endx==6 and endy==3) {cout<<3;}
    else if (endx==6 and endy==4) {cout<<4;}
    else if (endx==6 and endy==5) {cout<<5;}
    else if (endx==6 and endy==6) {cout<<4;}
    else if (endx==7 and endy==0) {cout<<5;}
    else if (endx==7 and endy==1) {cout<<4;}
    else if (endx==7 and endy==2) {cout<<5;}
    else if (endx==7 and endy==3) {cout<<4;}
    else if (endx==7 and endy==4) {cout<<5;}
    else if (endx==7 and endy==5) {cout<<4;}
    else if (endx==7 and endy==6) {cout<<5;}
    else if (endx==7 and endy==7) {cout<<6;}

}