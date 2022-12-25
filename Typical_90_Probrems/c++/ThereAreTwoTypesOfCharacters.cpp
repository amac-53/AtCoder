#include<bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    string S; cin >> S;

    // 仕切りを登録
    // 0, idx_1, ..., idx_P で登録
    vector<int> threshold(1, 0);
    for(int i=1; i<N; i++){
        if(S[i-1] != S[i]) threshold.push_back(i);
    }


    // 数え上げ
    long long ans = 0;
    for(int i=0; i<threshold.size(); i++){
        ans += 1LL * (threshold[i] - threshold[i-1]) * (N - threshold[i]);
    }
    cout << ans << endl;
    return 0;
}