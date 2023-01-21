#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, p, q; cin >> H >> W >> p >> q;
    if(p % 2 == 0 && q % 2 == 0) cout << "Black" << endl;
    else if(p % 2 == 1 && q % 2 == 1) cout << "Black" << endl;
    else cout << "White" << endl;
    return 0;
}