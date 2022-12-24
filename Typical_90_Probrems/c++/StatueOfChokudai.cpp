#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

const long double pi = 3.14159265358979;

int main(){

    int T; cin >> T;
    long long L, X, Y; cin >> L >> X >> Y;
    int Q; cin >> Q;
    for(int i=0; i<Q; i++){
        int E; cin >> E;

        // 観覧車の座標
        long double x1 = 0.0;
        long double y1 = -(L/2.0)*sin(2.0*pi*E/T);
        long double z1 = L/2.0 - (L/2.0)*cos(2.0*pi*E/T);

        // 距離計算
        long double a2 = sqrtl(X*X + (Y - y1)*(Y - y1));
        long double b2 = sqrtl(z1*z1);
        long double ans = atan(b2/a2) * 180.0 / pi;
        cout << fixed << setprecision(9) << ans << endl;
    }

    return 0;
}