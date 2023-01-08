#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main(){
    int N; cin >> N;
    string S; cin >> S;

    string correct_s = "atcoder";
    vector<vector<long long>> dp(S.size(), vector<long long>(7, 0));
    
    for(int i=0; i<(int)S.size(); i++){
        if(S[i] == correct_s[0]) dp[i][0] += 1;
        for(int j=0; j<7; j++){
            if(i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if(S[i] == correct_s[j] && j > 0) dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
        }
    }

    cout << dp[S.size()-1][6] << endl;

    return 0;
}