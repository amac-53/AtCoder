#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e5;
const long long INF = 1e9 + 7;

int main(){
    long long N, K; cin >> N >> K;

    vector<bool> seen(MOD, false);
    vector<int> memo(MOD+1, INF);  // 周期をメモ
    int cnt = 0;

    // 同じ数字が現れるまで
    while(!seen[N]){

        seen[N] = true;
        memo[cnt++] = N;

        // 桁和を計算
        int ketawa = 0;
        int tmp = N;
        while(tmp != 0){
            ketawa += tmp % 10;
            tmp /= 10;
        }

        // 更新
        N = (N + ketawa) % MOD;
    }

    // 周期を計算   
    int idx = 0;
    for(int i=0; i<=MOD; i++){
        if(memo[i] == N) idx = i;
    }

    int shuki = cnt - idx;
    if(K >= idx){
        cout << memo[idx + (K - idx) % shuki] << endl;
    }else{
        cout << memo[K] << endl;
    }

    return 0;
}