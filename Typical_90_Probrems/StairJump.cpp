#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main(){
    int N, L; cin >> N >> L;

    vector<int> dp(N+1, 0);

    dp[0] = 1;
    for(int i=1; i<=N; i++){
        if(i - L >= 0){
            dp[i] = (dp[i-1] + dp[i-L]) % MOD;
        }else{
            dp[i] = dp[i-1] % MOD;
        }
    }
    cout << dp[N] << endl;
    return 0;
}