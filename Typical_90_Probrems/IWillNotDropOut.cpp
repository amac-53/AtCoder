#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, K; cin >> N >> K;
    vector<int> score;

    for(int i=0; i<N; i++){
        int a, b; cin >> a >> b;
        // 部分点と満点-部分点のみで十分
        score.push_back(b);
        score.push_back(a-b);
    }

    sort(score.begin(), score.end(), greater<int>());

    long long ans = 0;
    for(int i=0; i<K; i++) ans += score[i];
    cout << ans << endl;

    return 0;
}