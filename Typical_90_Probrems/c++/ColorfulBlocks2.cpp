#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

// 繰り返し二乗法
long long iterative_pow(long long a, long long b){
    long long tmp = 1;
    while(b > 0){
        if(b & 1) tmp = tmp * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return tmp;
}


int main(){
    long long N, K; cin >> N >> K;

    if(N == 1) cout << K << endl;
    else if(N == 2) cout << K*(K - 1) % MOD << endl;
    else{
        long long ans = K*(K - 1) % MOD;
        ans = ans * iterative_pow(K - 2, N - 2) % MOD;
        cout << ans << endl;
    }

    return 0;
}