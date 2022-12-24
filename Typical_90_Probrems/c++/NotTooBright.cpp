#include<iostream>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    // コーナーケース
    if(H == 1 || W == 1) cout << max(H, W) << endl;
    else cout << ((H + 1) / 2) * ((W + 1) / 2) << endl;
    return 0;
}