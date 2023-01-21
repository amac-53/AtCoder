#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C; cin >> A >> B >> C;
    int y0, m0, d0, x, y1, m1, d1;
    cin >> y0 >> m0 >> d0 >> x; 
    cin >> y1 >> m1 >> d1;

    int diff0 = (y0-1)*A*B + m0*B + d0; 
    int diff1 = (y1-1)*A*B + m1*B + d1;
    int day_diff = ((diff1 - diff0) % C + C) % C;
    int res = (x + day_diff) % C == 0 ? C : (x + day_diff) % C; 
    cout << res << endl;    
    return 0;
}