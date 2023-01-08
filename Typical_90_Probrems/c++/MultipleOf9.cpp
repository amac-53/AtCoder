#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main(){
    int K; cin >> K;
    vector<long long> dp(K+1);

    if(K % 9 != 0){
        cout << 0 << endl;
        return 0;
    }

    dp[0] = 1;
    for(int i=1; i<=K; i++){
        for(int j=1; j<=9; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }

    cout << dp[K] << endl;

    return 0;
}