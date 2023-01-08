#include<bits/stdc++.h>

using namespace std;

int main(){

    int N, K; cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    map<int, int> cnt;
    int res = 0;

    // しゃくとり
    int r = 0, n_types = 0;
    for(int l = 0; l < N; l++){

        // 右側をできるだけ動かす
        while(r < N && n_types <= K){
            // 被っていない場合
            if(!cnt[A[r]]){
                if(n_types == K) break;  // 新たな種類が来て，すでにk種類のとき
                else{
                    n_types++;
                }
            }
            cnt[A[r]]++;
            r++;
        }
        res = max(res, r - l);

        // 左側の移動で種類が減る場合 
        if(cnt[A[l]] == 1) n_types--;
        cnt[A[l]]--;

    }
    cout << res << endl;
    return 0;
}