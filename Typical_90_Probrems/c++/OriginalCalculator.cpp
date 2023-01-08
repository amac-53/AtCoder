#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e5;

int main(){
    string N; cin >> N;
    int K; cin >> K;

    long long kurai = 1;
    long long res = 0;
    for(int i=(int)N.size()-1; i>=0; i--){
        long long a = (N[i] - '0');
        long long tmp = pow(2, K);
        long long ketawa = a * (tmp - 1 + kurai) % MOD;
        res += ketawa;
        kurai *= 10;
    }
    cout << res << endl;
    return 0;
}