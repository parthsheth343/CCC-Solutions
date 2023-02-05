#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    int nikky = 0, byron = 0;

    nikky = (t/(a+b)) * (a-b);
    byron = (t/(c+d)) * (c-d);

    if (a < (t%(a+b))) nikky += a; else nikky += t%(a+b);
    if (c < (t%(c+d))) byron += c; else byron += t%(c+d);

    if (t%(a+b)-a > 0) nikky -= (t%(a+b)-a);
    if (t%(c+d)-c > 0) byron -= (t%(c+d)-c);

    if (nikky == byron) cout << "Tied";
    else if (nikky > byron) cout << "Nikky";
    else cout << "Byron";

}