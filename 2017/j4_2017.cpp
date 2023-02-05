#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int d; cin >> d;
    int ans = 0;
    
    if (d > 720) {
        int f = d/720;
        ans += f*31;
        d -= f*720;
    }
    if (d >= 671) ans+=31;
    else if (d >= 591) ans+=30;
    else if (d >= 532)  ans+=29;
    else if (d >= 520) ans+=28;
    else if (d >= 473) ans+=27;
    else if (d >= 461)  ans+=26;
    else if (d >= 414) ans+=25;
    else if (d >= 402) ans+=24;
    else if (d >= 390)  ans+=23;
    else if (d >= 355) ans+=22;
    else if (d >= 343) ans+=21;
    else if (d >= 331)  ans+=20;
    else if (d >= 296) ans+=19;
    else if (d >= 284) ans+=18;
    else if (d >= 272)  ans+=17;
    else if (d >= 260) ans+=16;
    else if (d >= 237) ans+=15;
    else if (d >= 225)  ans+=14;
    else if (d >= 213) ans+=13;
    else if (d >= 201) ans+=12;
    else if (d >= 178)  ans+=11;
    else if (d >= 166) ans+=10;
    else if (d >= 154) ans+=9;
    else if (d >= 142)  ans+=8;
    else if (d >= 130) ans+=7;
    else if (d >= 119) ans+=6;
    else if (d >= 107)  ans+=5;
    else if (d >= 95) ans+=4;
    else if (d >= 83) ans+=3;
    else if (d >= 71)  ans+=2;
    else if (d >= 34) ans+=1;
    else ;
    cout << ans;
}